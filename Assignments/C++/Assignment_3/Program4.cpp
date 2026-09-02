//#include<iostream>
//#include<string>
//#include<memory>
//using namespace std;
//
//class Shader					//Part B — shared_ptr : Shared Shader Ownership
//{
//private:
//	string name;
//	string type;
//
//public:
//
//	Shader(const string& name, const string& type):name(name) , type(type)
//	{
//		cout << "Shader Comppiled" << endl;
//	}
//
//	~Shader()
//	{
//		cout << "Shader Destroyed" << endl;
//	}
//
//	int getReferenceCount(const shared_ptr<Shader>& Shader)
//	{
//		return Shader.use_count();
//	}
//};
//
//int main()
//{
//	auto shader = make_shared<Shader>( "main_vert" , "vertex");
//
//	cout << "Ref Count : " << shader.use_count() << endl;
//	{
//
//		auto rendererRef = shader;
//
//		cout << "Ref Count :" << shader.use_count() << endl;
//
//		auto editorRef = shader;
//
//		cout << "Ref Count :" << shader.use_count() << endl;
//	}
//
//	cout << "Ref Count :" << shader.use_count() << endl;
//
//	return 0;
//}
