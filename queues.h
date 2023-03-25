#pragma once
template<class a>
class queues
{ private:
	int front;
	int rear;
	int counters;
	int maxsize;
	a* array;
public:
	
	queues() {
		array = new a[24];
		front = 0;
		rear = -1;
		counters = 0;
		maxsize = 24;
	}
	queues(int maxsizes){
			maxsize = maxsizes;
			array = new a[maxsize];
			front = 0;
			rear = -1;
		    counters = 0;
	}
	void push(a& x){
	
		if (isfull()) {
			cout << "Error: the queue is full." << endl;

		}
		else {
			rear = (rear + 1) % maxsize;
			array[rear] = x;
			counters++;

		}
	}
	void pop(a&x) {
		if (isempty()) {
			cout << "Error: the queue is empty." << endl;

		}
		else {
			x = array[front];
			front = (front + 1) % maxsize;
			counters--;

		}
	}
	bool isempty() {
		if (counters != 0)
			return false;
		else return true;

	}
	bool isfull() {
		if (counters < maxsize)	return false;
		else				return true;

	}
	a fronts() {
				return array[front];
			
	}

};

