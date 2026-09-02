//#include<iostream>
//#include<string>
//#include<memory>
//
//using namespace std;
//
//class Texture			//Unique Pointer Exclusive Asset Ownership
//{
//private:
//	string name;
//	int width;
//	int height;
//
//public:
//	Texture(const string& name,int width,int height) : name(name), width(width), height(height)
//	{
//		cout << "Texture Loaded" << endl;
//	}
//
//	~Texture()
//	{
//		cout << "Texture Released" << endl;
//	}
//
//	void display() const
//	{
//		cout << "Texture :" << name << endl;
//		cout << "Dimensions :" << width << " " << height << endl;
//	}
//};
//
//
//int main()
//{
//	auto tex1 = make_unique<Texture> ("player_sprite", 512, 512);
//
//	tex1 -> display();
//
//	//unique_ptr<texture> tex2 = tex1;
//	//Unique Pointer Cannot be Copied because it Needs Exclusive Ownership.
//
//	unique_ptr<Texture> tex2 = move(tex1);
//
//	cout << "tex1 is Null:" << (tex1 == nullptr ? "YES" : "NO") << endl;
//
//	cout << "\n Texture Through tex2:" << endl;
//	tex2-> display();
//
//	return 0;
//
//
//}
