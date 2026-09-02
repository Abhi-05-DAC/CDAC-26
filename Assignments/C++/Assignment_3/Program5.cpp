//#include<iostream>
//#include<string>
//#include<memory>
//using namespace std;
//
//class AudioClip 			//Part C — weak_ptr : Non-Owning Observer
//{
//private:
//	string name;
//	double duration;
//
//public:
//	AudioClip (const string& name , const double& duration):name(name),duration(duration)
//	{
//		cout << "AudioClip Loaded" << endl;
//	}
//
//	~AudioClip()
//	{
//		cout << "AudioClip Released" << endl;
//	}
//
//	string getName() const
//	{
//		return name;
//	}
//
//	void display()const
//	{
//		cout << "AudioClip : " << name << endl;
//		cout << "Duration :" << duration << "Sec" << endl;
//	}
//};
//
//int main()
//{
//	auto audio = make_shared<AudioClip>("explosion", 3.5);
//
//	weak_ptr<AudioClip> observer = audio;
//
//	if(auto clip = observer.lock())
//	{
//		cout << "Clip alive :" << clip -> getName() << endl;
//	}
//
//	audio.reset();
//
//	if(observer.expired())
//	{
//		cout << "Clip Already Unlocked " << endl;
//	}
//
//	return 0;
//}
