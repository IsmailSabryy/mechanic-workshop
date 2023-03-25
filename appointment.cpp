#include<iostream>
#include"person.h"
#include"customer.h"
#include"mechanic.h"
#include"queues.h"
#include<queue>
using namespace std;
int main()
{
    queues<customer> q;
    bool flag = false;
    customer c[4];
    customer ahmed("Ahmed", 18, 18, 1, 0);
    customer sara("Sara", 11, 20, 4, 0);
    customer kareem("Kareem", 20, 15, 3, 0);
    customer mohammed("Mohammed", 20, 28, 1, 0);
    c[0] = ahmed; c[1] = sara; c[2] = kareem; c[3] = mohammed;
    mechanic m[3];
    mechanic ayman(4, "Ayman", 1, 18);
    mechanic khaled(4, "Khaled", 2, 20);
    mechanic mai(4, "Mai", 3, 22);
    m[0] = ayman; m[1] = khaled; m[2] = mai;
    sort(c, c + 4);
    for (int i = 0; i < 4; i++) {

        if (m[i % 3].isAvailable(c[i].getappointment())&&i!=3) {
            c[i].setmechanicid(m[i % 3].idgetter());
            c[i].setappointment(m[i % 3].getappoint(i%3).hours, m[i % 3].getappoint(i%3).mins);
            q.push(c[i]);
 
        }
        else if (i == 3) {
            c[i].setmechanicid(m[(i % 3)+1].idgetter());
            c[i].setappointment(m[(i % 3)+1].getappoint((i % 3)+1).hours, m[(i % 3)+1].getappoint((i % 3)+1).mins);
            q.push(c[i]);
        }
    }


    while (!q.isempty()) {
        customer cust = q.fronts();
       cout<< cust.namegetter();
        cout << "  is assigned with : " ;
        for (int i = 0; i < 3; i++) {
            if (cust.getmechanicid() == m[i].idgetter()) {
                cout << m[i].namegetter()<<endl;

            }
        }

        q.pop(cust);
    }

    return 0;
}
