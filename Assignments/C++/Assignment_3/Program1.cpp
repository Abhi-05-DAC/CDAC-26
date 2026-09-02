//#include<iostream>
//#include<string>
//using namespace std;
//
//enum class HttpStatus
//{
//	OK = 200,
//	 Created = 201,
//	 BadRequest = 400,
//	 Unauthorized = 401,
//	 NotFound = 404,
//	 ServerError = 500
//};
//
//void handleResponse(HttpStatus status, const string& endpoint)
//{
//	switch (static_cast<int>(status))
//	{
//	case 200:
//		cout << "[GET " << endpoint << "]->" << "200 OK : Request Successful" << endl;
//		break;
//
//	case 201:
//		cout << "[POST " << endpoint << "] ->" << "201 Created : Resource Created Successfully " << endl;
//		break;
//
//	case 400:
//		cout << "[" << endpoint << "] ->" << "400 Bad Request :Invalid Request " << endl;
//		break;
//
//	case 401:
//		cout << "[POST" << endpoint << "] ->" << "401 Unauthorized : Authentication required " << endl;
//		break;
//
//	case 404:
//		cout << "[GET" << endpoint << "[ ->" << "404 Not Found : Endpoints Does not Exist " << endl;
//		break;
//
//	case 500:
//		cout << "[POST" << endpoint << "[ ->" << "500 Server Error : Internal server error " << endl;
//		break;
//
//	default :
//		cout << "[" << endpoint << "] ->" << "Unknown HTTP Status" << endl;
//	}
//}
//
//int main()
//{
//	handleResponse(HttpStatus :: OK, "/api/users");
//	handleResponse(HttpStatus :: Unauthorized, "/api/login");
//	handleResponse(HttpStatus :: NotFound, "/api/products/99");
//	handleResponse(HttpStatus :: ServerError, "/api/order");
//
//	return 0;
//}
