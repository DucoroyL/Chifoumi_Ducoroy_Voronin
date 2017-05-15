#include <iostream>
 #include <glog/logging.h>
 
using namespace std;
int main(int argc, char ** argv){
	google::SetLogDestination(google::GLOG_INFO, "log_chifoumi");
	google::InitGoogleLogging(argv[0]); 
	cout <<"Hello World"<<endl;
	LOG(INFO) << "Test log Hello World"; 
	return 0;
}
