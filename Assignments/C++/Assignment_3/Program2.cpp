//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//using Header = pair<string, string>;
//using HeaderList = vector<Header>;
//
//using Port = unsigned int;
//using IPAddress = string;
//
//typedef unsigned long long RequestId;
//
//void printHeaders(const HeaderList& headers)
//{
//	cout << "Headers" << endl;
//
//	for(const Header& header : headers)
//	{
//		cout << " " << header.first <<" : " << header.second << endl;
//	}
//}
//
//int main()
//{
//	RequestId requestId = 1234567;
//
//	Port serverPort = 8080;
//
//	IPAddress IP = "182.00.23.111";
//
//	HeaderList  headers;
//
//	headers.push_back({ "Content-Type", "application/json" });
//
//	headers.push_back({"Authorization",  "Bearer eyJhbGci..."});
//
//	headers.push_back({"Accept-Language", "en-US"});
//
//	cout << "RequestId : " << requestId << endl;
//
//	cout << "Server Port : " << serverPort << endl;
//
//	cout << "IP Address : " << IP << endl;
//
//	printHeaders(headers);
//}
//
