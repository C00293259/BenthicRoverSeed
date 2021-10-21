//thread example
#include <iostream> //cout
#include <thread> //thread
#include <pthread.h> //thread extend
#include <mutex> //locks

std::mutex mu;

void foo(int x){
	for(int i=0; i<=10;i++){
		printf("Thread %d is working\n", x);
	} 
}

void bar(int x){
	for(int i=0; i<=10;i++){
		printf("Thread %d is working\n", x);
	} 
}

int main()
{
	std::thread first (foo,0);
	std::thread second (bar,1);
	
	std::cout<< "main, foo, and bar now execute concurrently...\n";
	
	
	//synch threads:
	
	first.join(); 	//pauses until first finished
	second.join();	//pauses until second finishes
	
	std::cout << "foo and bar completed. \n";
	
	return 0;

}
