#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"bits/stdc++.h"<<endl;
	cout<<'A';
	return 0;
}
cout���ַ����������printfһ����˼��ÿ��Ҫ����Ķ���ǰ��Ҫ�Ӹ�<<
 
 
 
 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a=1.235;
	printf("%.1lf",a);
	printf("%.2lf",a);
	return 0;
}
%lf������������ͣ�%.����lf����С������汣����λ�����ﱣ����ʱ���Ǿ������������
%lld��������long long���� 






#include<bits/stdc++.h>
using namespace std;
int main() 
{
	char a[10];
	scanf("%[^\n]",a);
	printf("%s",a);
	return 0;
}
�ַ����������ǵ�ַ������scanf��ʱ����Ҫʹ��&��ʹ�õ�ʱ�����ʹ���˿ո��������ȡ��
ʱ��ͻ�ֻ������һ���ո�ǰ�ߣ����������Կո񣬾�Ҫ�������ʱ����&s������%[^\n]��
��ʾ���Կո� 





#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int a,b;
	cin>>a>>b;
	cout<<a<<"\n"<<b;
	
	double c,d;
	cin>>c>>d;
	cout<<fixed<<setprecision(1)<<c<<"\n"<<d;
	
	string s; 
	getline(cin,s);
	cout<<s;
	return 0;
}
��ʹ��cin,cout��ʱ����ΪҪ�ж����͵��ڲ�ԭ��Ч�ʱ�scanf,printf����ȡ��ͬ�������Լ���
д��ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);���� 
cin��cout�������ķ�ʽ���ô��ǲ��������������ʱ���ע����%d,%s���������������ַ������
������ʹ�ÿո��س���ʱ��Ϳ���������һ�� 
ʹ��double��ʱ�������ʹ��<<fixed<<setprecision(����) ������ȫ������������(��Ĭ��С
������5��)��ʹ����<<fixed<<precision(����)��ʱ����ǰ�����ߵ����ֽ���С��������
����������ַ�����ʱ����������ϱߵķ����ͻ������ո��ֻ��ȡ��һ���س�ǰ�ģ��������
Ҫ����ʹ��cin��cout����Ҫʹ��string�����ַ�����Ȼ��get(cin,����) ���ܱ�֤��ȡ�ո� 
string��char/int[]��ͬ����string��û������/0








#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	char arr[10];
	cin>>arr+1;
	cout<<arr+2;
	return 0;
}
cin>>arr+1��ʾ��arr[1]��ʼ���룬cout<<arr+2��ʾ��arr[2]��ʼ��� 




#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str1="bits/stdc++.h";
	string str2=str1;
	string str3=str1.substr(0,3);
	const char*arr="bits/stdc++.h";
	string str4(arr);
	string str5(5,'a');
	cout<<str1<<'\n';
	cout<<str2<<'\n';
	cout<<str3<<'\n';
	cout<<str4<<'\n';
	cout<<str5<<'\n';
	return 0;
}
string������ʹ�÷�����ͷ�ļ�#include<string>��
�����arr2����ֱ�Ӹ�arr1��ֵ������
ʹ��str.substr(�ڼ�������λ��)�ܽ��õ�str��ĳ��λ
ʹ��const char*arr��str(arr)�ܽ�����arr�����ݸ���str
ʹ��str(������'�ַ�')�ܰ���Щ�ַ�����str








#include<bits/stdc++.h>
using namespace std;
int main()
{
	char arr[100];
	scanf("%s",arr);
	string str(arr);
	printf("%s",str.c_str());
	return 0;
 } 
��ʹ��scanf��ʱ��ȡ�õ���arr�ĵ�ַ���൱�ڰ�arr����Ϊconst char*arr���˺���ֻ��printf
��ӡ��ʱ����Ϊstring��c++���÷���printf��c���÷���Ҫ��str��Ϊc���÷���ʹ�õ��˺���
.c_str()  









#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str1="shang";
	string str2="hangdian";
	int a=str1.length();
	int b=str2.size();
	cout<<a<<'\n'<<b;
	return 0;
}
���string�ĳ��ȣ���str.length()��str.size(),Ҫע�����Ų��ܶ������ﲻ��\0





 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str1="hello";
	string str2="hangzhou";
	string str3=str1+","+str2;
	string str4=str1.append(",").append(str2);
	cout<<str3<<'\n'<<str4;
	return 0;
 }
 ����string��ƴ�ӣ�����ʹ��+����.append()����ʽ������Ҫע�������ﶼ�����ַ���
 ����ʽƴ�ӣ�����ʹƴ�ӵ����ַ���ҲҪ��˫����
 
 
 
 
 
 #include<bits/stdc++.h>
using namespace std;
int main()
{
	string str1="shanghangdian";
	size_t a=str1.find("hangdian");
	if(a!=std::string::npos)
	cout<<a;
	else
	cout<<0;
	return 0;
}
����str����Ƿ�����ַ�����ʱ��ʹ��.find(�ַ���)��������ʹ�õ�ʱ���aҪ��������
size_t��find()�ڲ�Ҫʹ��""����Ϊ���ҵ����ַ���������ֵ����str���Ǹ��ַ�����һ����
Ϊ���Ǵ�0��ʼ��
�±��жϵ�ʱ��std::string::npos�ǹ̶��ģ�����ֵ����-1����ȻҲ����ֱ��ʹ��-1






#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str1="beijing";
	string str2="shanghai";
	str1.replace(0,1,"hangzhou");
	str2.replace(0,20,str1);
	cout<<str1<<'\n'<<str2;
	return 0; 
}
�ı�string��ʱ��ʹ��.replace(�ڼ����ַ�����ԭ���м������ַ���)����ʽ������ĵ�����
����ԭ���ĳ���Ҳû��ϵ 





#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str1="a";
	string str2="b";
	string str3="aa";
	string str4="ab";
	cout<<str1.compare(str2)<<endl;
	if(str3<str4)
	cout<<-1;
	return 0;
 } 
 �ڱȽ��ַ������ȵ�ʱ�����ʹ�ú���str1.compare(str2)�����str1��str2С������ֵ��-1
 �����0��������1�����Ƚϵķ�ʽ�Ǵӵ�0��λ�ñȽϣ�a<b�Դ����ƣ�ǰһ�������Ƚ���һ�� 
 Ҳ����ֱ��ʹ��<>==���бȽϣ�ע���ڴ�ʱ������=�ţ�������==��=�Ǹ�ֵ�õ� 
 
 
 
 
 
 #include<bits/stdc++.h>
using namespace std;
int main()
{
	string str="hangzhou";
	for(auto i:str)
	{
		i='a';
	}
	cout<<str<<endl;
	for(auto&i:str)
	{
		i='a';
	}
	cout<<str;
	return 0;
}
ʹ��autoö�ٱ����ַ�����for(auto ����:�ַ���)�����ñ�������ַ�����ÿһ���ַ����б���
��ʹ�õ�ʱ��ȡ��ַ�������������ַ�����ֵ




#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	for(int i=str.length()-1;i>=0;i--)
	cout<<str[i];
	cout<<endl;
	reverse(str.begin(),str.end());
	cout<<str<<endl;
	for(int i=0;i<str.length()/2;i++)
	{
		swap(str[i],str[str.length()-i-1]);
	}
	cout<<str;
	return 0;
 } 
 ���������ʱ��ͨ�������ַ���
1.ֱ�ӴӺ���ǰ��ȡ
2.ʹ��reverse(�ַ���.begin(),�ַ���.end())����ֱ�ӽ��ַ���ʵ�ַ�ת
3.ʹ��swap(str[i],str[str.length()-i-1])���forѭ�������ԳƵĵ��� 
reverse��swap���Ǻ�sortһ�����һ�������һ����ַ����һλ 








#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[100];
	int a;
	cin>>a;
	for(int i=0;i<a;i++)
	cin>>arr[i];
	sort(arr,arr+a);
	for(int i=0;i<a;i++)
	cout<<arr[i];
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>arr={2,41,4,5,8};
	sort(arr.begin(),arr.end());
	for(int i=0;i<arr.size();i++)
	cout<<arr[i];
	return 0;
 } 
sort����������ģ�ʱ�临�Ӷ�Ϊ(nlogn)��sort��ʹ�÷���Ϊ(��ʼ��ַ,���һ����ַ����һλ
�����з���)������Ĵ�С�ںſ��Բ�д��Ĭ��ΪС�ںţ���Ҫ���ںŵ�ʱ����д���·��� 
����������ʹ�÷��� 
��һ�����Լ��������飬��sort�����������ĵ�ַ����arr+����
�ڶ�����ʹ�õ�����vector<int>arr={}��һ�ִ�������ķ�ʽ������Ҫд������Ͷ��ٸ���
��sort��ʹ�õķ���������string ������ʹ�ó��Ⱥ�����ʱ����ʹ��.length()��ֻ��ʹ��
.size()�ķ�ʽ 






#include<bits/stdc++.h>
using namespace std;
bool cmp(int &m,int &n)
{
	return m>n;
}
int main()
{
	vector<int>arr={4,2,7,1};
	sort(arr.begin(),arr.end(),cmp);
	for(int i=0;i<=arr.size()-1;i++)
	{
		cout<<arr[i];
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>arr={8,2,5,1};
	sort(arr.begin(),arr.end(),[&](int &m,int&n)
	{return m>n;});
	for(int i=0;i<=arr.size()-1;i++)
	{
		cout<<arr[i];
	}
	return 0;
}
����Ϊ���Զ���sort�ķ���
��һ���ǵ�����һ��bool����������int&m��int&n��return��ʱ��涨��С
�ڶ�����дһ��lambda(������������ֻ���ڴ˴����ã�ǰ������Ҫд����������Ҫд[]�����
��&�ɼӿɲ��ӣ�����ߵ�int&m��int&n�Ǳ������&��  







#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int u,v;
	bool operator<(const Node &m)const
{
	return u==m.u?v<m.v��u<m.u; 
}
}
�ṹ�����أ�operator<������const�ǹ̶��ģ��������������ȱȽ�u�ڱȽ�n�����ڷ���ʱ
return u==m.u?v<m.v:u<m.u







#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a=min(1,3);
	int b=min({4,1,6,3});
	int c=max(1,5);
	cout<<a<<'\n'<<b<<'\n'<<c;
	return 0;
 } 
 ȡ���ֵ��Сֵ����������min(,)��max(,),����������min({})��max({}) 







#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr={2,1,5,3};
cout<<*min_element(arr.begin(),arr.end())<<endl;
cout<<*max_element(arr.begin(),arr.end());
return 0;
 } 
 min_element��max_element�����ҵ����е�������Сֵ�������Ҫ������ʼ��ַ�����һ��
 ��ַ����һλ�����ص�Ҳ�ǵ�ַ����������Сֵ�ĵ�ַ������Ҫ���н����ò���
 
 
 
 
 
 
 
 
 #include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>arr={2,5,1,3,4};
	nth_element(arr.begin(),arr.begin()+3,arr.end());
	for(int i=0;i<=arr.size()-1;i++)
	{
		cout<<arr[i];
	}
return 0;
}
nth_element(.begin(),.begin()+����,.end())�����õڼ���������ڵڼ�λ��.begin()�ӵ���
�ֱ�ʾ�ӵ�0λ��ʼ�ڼ���Ҳ�����Ϊǰ���ж��ٸ����֣�����������λ�õ����ֵ�˳����ҵ�










#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin>>a;
	const int b=a;
	int arr[b];
	for(int i=0;i<=b-1;i++)
	{
		cin>>arr[i];
	}
int mn=arr[0];
int mx=arr[0];
for(int i=0;i<=b-1;i++)
{
	mn=min(mn,arr[i]);
	mx=max(mx,arr[i]);
}
cout<<mn<<'\n'<<mx<<endl;
	double sum=0;
	for(int i=0;i<=b-1;i++)
	{
		sum+=arr[i];
	}
	cout<<fixed<<setprecision(2)<<sum/b;
	return 0;
}
�������趨�����СֵΪarr[0]��Ȼ��ͨ��forѭ����min()��max()�ҵ������Сֵ��Ҳ������
min_element()��max_element()Ȼ�������ֱ�ӵõ������Сֵ 
��������Ҫ����С�������֮ǰû�����ø������ͣ��Ǿ�������1.0 






3��5��|||||||||||||||||||||||||||||| 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>arr={1,2,3,4,5};
	int a=3;
	bool/int b=binary_search(arr.begin(),arr.end(),a);
	cout<<b;
	return 0;
}
binary_search(��ʼ��ַ������ַ����һ����ַ,���ҵ�����)��һ�����������������û����
��Ԫ�صĺ���������ֵ��1��0
����ʹ�õ��Ƕ��ֲ��ң���ֻ�Ե���������Ч







#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>arr={1,2,3,4,5};
	cout<<*lower_bound(arr.begin(),arr.end(),2)<<endl;
	cout<<*upper_bound(arr.begin(),arr.end(),2);
	return 0;
 } 
 lower_bound(��ʼ��ַ��������ַ��һλ����ֵ)������������������ڵ��������ֵ��ֵ����
 ������ķ���ֵ������ֵ�����ǵ�ַ����Ҫ���н����ò�������õ��������е�Ϊ���ڼ�ȥ��
 ʼ��ַ���� 
 �����õ�Ҳ�Ƕ��ַ���ֻ�ܲ��ҵ������У�������ǵ����Ŀ�������sort�����б�ɵ�������
 ʹ��
 upper_bound��low_boundʹ�õķ���һ����ֻ����upper_bound���������Ҵ��������ֵ��ֵ 
 
 
 
 
 
 
 
 
 
 
 
 
 #include<bits/stdc++.h>
using namespace std;
bool cmp(int&m,int&n)
{
	return m>n;
}
int main()
{
	vector<int>arr={1,2,3};
	for(int i:arr)
	{
		cout<<i;
	}
	cout<<endl;
	while(next_permutation(arr.begin(),arr.end()))
	{
		cout<<"The next is:"<<endl;
		for(int i:arr)
		{
			cout<<i;
		}
		cout<<endl;
	}
	for(int i:arr)
	{
		cout<<i;
	}
	cout<<endl;
	sort(arr.begin(),arr.end(),cmp);
	for(int i:arr)
	{
		cout<<i;
	}
	cout<<endl;
	while(prev_permutation(arr.begin(),arr.end()))
	{
		cout<<"The prev is:"<<endl;
		for(int i:arr)
		{
			cout<<i;
		}
		cout<<endl;
	}
	return 0;
}
next_permutation(��ʼ��ַ�����յ�ַ����һλ)�ǽ�һ��ʼ���ٰ���123��132��213��231��
312��321��˳������һλ�� ����ֵ��1��0������ŵ�321�˾�û����һλ�ˣ�����һ���Ƿ���
ֵ����0���ǻ��ǽ������ų���123����ʽ 
prev_permutation���ǵ�������һ�Σ���������ŵ���321����һ������0 







#include<bits/stdc++.h>
using namespace std;
int main()
{
char ch='A';
int a=islower(ch);
ch=tolower(ch);
int b=isupper(ch);
cout<<a<<'\n'<<b<<endl;
char ch1='a';
int c=isupper(ch1);
ch1=toupper(ch1);
int d=islower(ch1);
cout<<c<<'\n'<<d;
	return 0;
}
islower(ch)�������鿴�Ƿ�ΪСд�ģ�isupper�������鿴�Ƿ�Ϊ��д�ģ�����ֵ����Bool
tolower(ch)��toupper(ch)���ǽ���Сд����ת���ģ�����ֵ���ַ� 
 
 
 
 
 
 
 
 #include<bits/stdc++.h>
using namespace std;
int main()
{
char ch='B';
ch='a'-'A'+'B';
cout<<ch<<endl; 
ch='b'-'a'+'A';
cout<<ch;
return 0;
}
����Ϊ��Сд������ʵ�֣���ͨ��ASCII��ֵ��ʵ�� 







#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[10];
memset(arr,0x3f,sizeof(arr));
for(int i=0;i<=9;i++)
{
	cout<<bitset<32>(arr[i])<<endl;
}
	return 0;
}
memset(��ַ,�ĳ�ʲô����,���ٸ��ֽ�)�����ı������ڵ���,�ı����1byte��һ��byte��8
��bit,һ��������4��byte,��sizeof��ȡ��С��ʱ��ȡ�õ���4byte,���Լ���ȫ���ĳ�1,��
�����ָ�Ϊ00000001000000010000000100000001,����һ��ֻ���ڸĳ�0��ʱ��᷽��һЩ,
��������16���ƶ���,0x����16����,16����ÿ��λ�ô���4��bit,�ϱߵ�3f,ǰ�ߵ�3����3��
16,һ��16��10000,3���ͱ����0011,��ߵ�f����15,�ͱ����1111,����3f�ͱ����00111111
ÿ��byte�������0x3f,����bitset<32>(����)��ʱ����ʾ32λ�ͱ����4��00111111 
memset��Ȼ����ֵ��Ȼ��arr 









#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int>arr={1,1,2,2,3,4,4,5};
auto it=unique(arr.begin(),arr.end());
arr.erase(it,arr.end());
for(int i=0;i<=arr.size()-1;i++)
{
	cout<<arr[i];
}
 return 0;
}
unique(��ʼ��ַ,���յ�ַ����һλ)�ܹ��������ظ��ķ������,�ؼ���������,���������ܷ�
��ȥ,��������������Ļ���Ҫ��sort����һ������,�������Ҳ��������Ǽ����ظ��ķ�������
��,���ǰ���󼸸����Ƶ������
unique�ķ���ֵ�ǵ�һ�����������ĵ�ַ,�����Ҫ������ֳ��׵�������Щ�����,Ҫ��
.erase(��һ�����������ĵ�ַ,����ַ����һλ)������ɾ��








3��6��|||||||||||||||||||||||||||||||||||||||||||||||||| 
#include<bits/stdc++.h>
using namespace std;
int main()
{
pair<int,string>
pa1(1,"hangzhou");
pair<int,pair<int,string>>
pa2(1,make_pair(1,"hangzhou"));
cout<<pa1.first<<pa1.second<<endl;
cout<<pa2.first<<pa2.second.first<<pa2.second.second;
return 0;
}
pair���Խ�������ͬ�����͵ķ���һ��������struct���ڽ����ʱ�����ҪǶ��pair����Ҫд
��pair<pair<>,pair<>>����ʽ�����±ߴ�����ʱ��Ҫд��pa(make_pair(),make_pair())����ʽ
���ʵ�ʱ�����Ƕ�׷���




#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<pair<int,int>>arr;
arr.push_back(make_pair(3,1));
arr.push_back(make_pair(1,3));
arr.push_back(make_pair(1,2));
sort(arr.begin(),arr.end());
for(auto i:arr)
{
	cout<<i.first<<i.second<<endl;
}
return 0;
}
pair��ͬ�����������ʱ����ӵ�һλ�����������һλһ�����ŵڶ�λ���Դ����Ƶ���ʽ
˳��������.push_back()����˼���������һλ 











#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int>arr={1,2,3,4,5};
arr.push_back(6);
for(int i=0;i<=(int)arr.size()-1;i++)
{
	cout<<arr[i];
}
cout<<endl;
arr.pop_back();
for(int i:arr)
{
	cout<<i;
}
cout<<endl;
arr.erase(arr.begin()+1);
for(int i:arr)
{
	cout<<i;
}
cout<<endl;
arr.insert(arr.begin()+1,2);
for(int i:arr)
{
	cout<<i;
}
cout<<endl;
int a=arr.empty();
cout<<a<<endl;
arr.clear();
a=arr.empty();
cout<<a;
return 0;
}
vector������������̬����ģ������Ĵ�С�����趨��֮���޸�Ҳ�����Լ��ı��С��������
.push_back(����)���������һ��λ����ӣ�ʹ��.pop_back(),����ɾ�����λ�õ�һ��Ԫ�أ� 
����arr.resize()�����ı��С���������������֮������puch_back�����Ԫ�صĻ�����ô��
�����������arr�����һ���ˣ��м佨��Ļ��п��ࡣ��.erase(Ԫ��)����ɾ���ƶ�Ԫ�أ���
��ɾ��������Ҳ��ɾ��һ�Σ������ɾ��arr[1]���������д��.begin()+1����.insert��λ��
��Ԫ��)������һ��λ������һ��Ԫ�ء���.empty()���Լ�⶯̬�����ǲ��ǿյģ�����ǿյ���
����1�����ǿյ��򷵻�0(ע��),��.clear()���Խ������������
vector�����õ�����,��,begin()��.end() 
����û�������ݾ�ֱ����arr[i]=һ��ֵ����Ϊ����û�����ռ� 
��ʹ��size()��ʱ�򷵻ص���һ��unsigned�����ͣ�һ�����������������.size()��0�Ļ�����
ȥ1֮��ͱ���˶�����������111111111111111111111111������� 






#include<bits/stdc++.h>
using namespace std;
int main()
{
list<int>arr={1,2,3};
arr.push_back(3);
arr.push_front(1);
for(int i:arr)
{
	cout<<i;
}
cout<<endl;
arr.pop_back();
arr.pop_front();
for(int i:arr)
{
	cout<<i;
}
cout<<endl;
arr.front()=3;
arr.back()=1;
for(int i:arr)
{
	cout<<i;
}
return 0; 
}
list������������vector��ͬ����������ǰ��ɾ����ɾ����ʱ�临�Ӷȶ���0(1)�����ҵ�ƽ
��ʱ�临�Ӷ���0(n)����ʹ�ù����ж������.pop_front()��.push_front()���ڽ��ǰ�󷽵�
��ɾ������.front()=���ֺ�.back()=����������ǰ�󷽵�ֵ,Ҳ���Եõ�ǰ�󷽵�ֵ����Ϊ����
������ 

�Ҳ�����arr[x]����ʾԪ�أ� ʣ�µ��÷�ʣ�¶���vectorһ��









#include<bits/stdc++.h>
using namespace std;
int main()
{
stack<int>arr;
arr.push(1);
arr.push(2);
int a=arr.top();
cout<<a<<endl;
arr.pop();
a=arr.top();
cout<<a<<endl;
a=arr.empty();
cout<<a<<endl;
a=arr.size();
cout<<a;
return 0; 
}
stack��ջ����˼�������ڴ�����ʱ��ͷź�Ԫ���ˣ�ֻ���ڷŵ�ʱ��һ��һ���ţ��ȷŽ�ȥ��
����ջ�ף���Ž�ȥ�ķ���ջ����ȡ��ʱ���ȴ�ջ��ȡ��.top()����ȡ��ջ����һ��Ԫ�أ���
.push(Ԫ��)�������ӵ�ջ��һ��Ԫ�أ�.pop()��ȥ��ջ����һ��Ԫ�أ���������ֻ��.empty()
��.size()����ʹ��
ע��::stack���ܱ���!!!!��Ҫ֪�������ʲôֻ��һ��һ���ó�����Ȼ����һ�����Ż�ȥ����
���б���









#include<bits/stdc++.h>
using namespace std;
int main()
{
queue<int>arr;
arr.push(1);
arr.push(2);
arr.push(3);
int a=arr.front();
cout<<a<<endl;
arr.pop();
a=arr.front();
cout<<a<<endl;
a=arr.back();
cout<<a<<endl;
a=arr.empty();
cout<<a<<endl;
a=arr.size();
cout<<a;
return 0; 
}
queue���Ƚ��ȳ������ݽṹ�����ø�stack���������Ƚ������ȳ�ȥ������ʹ��.push(Ԫ��),
.pop(),.empty(),.size(),����.front()��.back()��list��ͬ��list�Ǹ�front��back��ֵ�� 
��queue���ܵõ� front��back����stackһ�������ܱ���
�ɲ������¼����Ӷȶ���0(1) 








#include<bits/stdc++.h>
using namespace std;
struct compare
{
	bool operator(int a,int b)
	{
		return a>b;
	}
};
int main()
{
priority_queue(int,vector<int>,compare); 
return 0; 
}

#include<bits/stdc++.h>
using namespace std;
auto compare=[](int a,int b)
{
	return a>b;
};
int main()
{
priority_queue<int,vector<int>,decltype(compare)>arr(compare);
return 0; 
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
priority_queue<int,vector<int>,greater<int>>arr;
return 0; 
}
priority_queueΪ���ȶ��У�д��Ϊpriority_queue<Ԫ�����ͣ�vector<Ԫ������>,���з�ʽ>
������п����кܶ�ֲ棬���ֶѵ���ʽ���ѵĶ���Ϊ��ֵ������Ϊ���ֵ��Ҳ����Ϊ��Сֵ,
һ��Ϊ���ֵ��Ȼ�����µķ�֧���ǵݼ��ģ�����ʹ��.push(Ԫ��)�����ȥ����.pop()ȥ����
��Ԫ�أ���������ʱ�临�Ӷȶ���0(logn)��.top(),.size(),.empty()�����û��Ǻ���ǰ��һ��
����Щ���¼����ӶȻ���0(1) 
�����Ҫ�ѵĶ���Ϊ��Сֵ��Ҳ��С���ѣ��������ķ��������޸�
��һ�������÷º����ķ������ȴ���ṹ�壬Ȼ��дoperator(),operator��ߵ�()��������֮
����������ò����������� 
�ڶ��ַ�ʽ�ǵ��ú���
�����ַ�ʽ��Ϊ��㣬ֱ�������з�ʽд��greater<int>��һ�㲻д��ʱ��Ĭ��Ϊless<int>

dequeΪ˫�˶��У�ʹ�õ�ʱ����listһ����Ψһ��ͬ����.front()��.back()��Ȼ�Ǹ�queueһ
���Ƿ���ͷ��β��ֵ����������list�ܹ��޸�







#include<bits/stdc++.h>
using namespace std;
int main()
{
set<int>arr={3,3,6};
arr.insert(arr.begin(),5);
for(int i:arr)
{
	cout<<i;
}
cout<<endl;
arr.erase(5);
for(int i:arr)
{
	cout<<i;
}
cout<<endl;
int a;
if(*arr.find(3))
cout<<1;
a=*lower_bound(arr.begin(),arr.end(),3);
cout<<a<<endl;
a=*upper_bound(arr.begin(),arr.end(),3);
cout<<a<<endl;
a=*arr.rbegin();
cout<<a<<endl;
a=*arr.rend();
cout<<a<<endl;
arr.clear();
a=arr.size();
cout<<a<<endl;
a=arr.empty();
cout<<a;
return 0; 
}
set<Ԫ�����ͣ����з�ʽ>��������ֻ�����ɵ���һ��Ԫ�أ���ֻҪ�����ȥ���Զ���ɵ�������
�������ȥ�ظ���Ԫ��֮��set���Զ������ظ���Ԫ�أ����з�ʽĬ��Ϊ���������ʹ�ý���
�������ϱߵ�priority_queueһ������һ������������º�������ʹ��greater<Ԫ������>
��ʹ�õ���.insert,.erase,.find,lower_bound,upper_bound,.size(),(��ǰ�¼����Ӷ���0(logn)))
���඼��0(1)��.empty(),.clear(),.rbegin(),.rend()������.rbegin()��ָ�����һ����������
��һλ�ķ����ǵ�����,��β��.rend()�� 
�����erase��ʹ�õ�ʱ�����Ҫ�÷�Χ�Ļ���Ҫ��++arr.begin() 
�������Ĳ�ͬ�Ļ���set����ʹ��arr[i]����ʽ 
multiset��set��ʹ�÷���һ����Ψһ�Ĳ�ͬ��multiset���Դ���ظ������ݣ��������ֻ��ɾ��
һ��x����ʹ����.erase(x)����ɾ������������е�x��ɾ���ˣ���Ҫֻɾ��һ������Ҫʹ��
.erase(.find(x)) 











#include<bits/stdc++.h>
using namespace std;
int main()
{
unordered_set<int>arr={1,1,3};
arr.insert(4);
for(auto i:arr)
{
	cout<<i;
}
cout<<endl;
arr.erase(4);
for(auto i:arr)
{
	cout<<i;
}
cout<<endl;
int a=arr.count(1);
cout<<a<<endl;
a=arr.size();
cout<<a;
return 0; 
}
unordered_set��set������汾���ڴ�ӡ��ʱ��һ������ʲô˳�򣬶��һ���setһ���Զ�����
�ظ�Ԫ�أ�.count(x)�������Ҹ�Ԫ�س����˼���












3��7��||||||||||||||||||||||||||||||||||||||||||||||||| 
#include<bits/stdc++.h>
using namespace std;

int main()
{
	map<int,string>arr={{2,"hangzhou"},{4,"shanghai"}};
	arr.insert(make_pair(3,"beijing"));
	arr.insert(make_pair(2,"jiangsu"));
	for(auto i:arr)
	{
		cout<<i.first<<i.second<<endl;
	}
	cout<<arr[2]<<endl;
	int a=arr.count(2);
	cout<<a<<endl;
		arr.erase(2);
	for(auto i:arr)
	{
		cout<<i.first<<i.second<<endl;
	}
	arr.clear();
a=arr.empty();
cout<<a;
	return 0;
 } 
 map<�ַ�����(������int����),�ַ�����>={{},{}}����������ֺ��ַ����������֮�������
 ��ʱ�������arr[x]�����ã��������x����Ϊ�򣬶�����ߴ�ŵ����֣���������ʾ��ֻ�д�
 ���string.count(x)�ܲ�x���������м�����������ᷢ������о�ֻ��һ������Ϊ���������
 �˵�ʱ���ٲ����ǲ岻��ȥ�ģ��������map����ǰ����ͬ����߲�ͬ�Ŀ���ѡ���ߵ��ַ���
 ����vector<>��ͬ���ֲ��ȥ֮��Ҳ�������������Ҳ����ʹ��.clear()���������insert,
 erase,find,count,lower_bound,upper_bound��ʹ�õ�ʱ��ʱ�临�Ӷȶ���0(logn)��������
 0(1)ʹ��Ҳ��vectorһ����ֻ��Ҫע�������д��x�������֣�������λ�� 
 multimap��ʹ�ú�map��һ���ģ�Ψһ�Ĳ�ͬ��multimap���Դ�����ͬ��x 
 ��unorder_map������ģ�����в���ʹ�ù�ϣ������ƽ��ʱ�临�Ӷȶ���0(1)���������
 ��0(n) 
 
 
 
 
 
 
 
 
3��8��||||||||||||||||||||||||||||||||||||||||||||||||||����
#include<bits/stdc++.h>
using namespace std;
int feibonaqi(int b)
{
	if(b<=1)
	{
	return b;
}
	return feibonaqi(b-1)+feibonaqi(b-2);
}
int main()
{
	int a;
	cin>>a;
	int result=feibonaqi(a);
	cout<<result;
}
쳲��������У�ʱ�临�Ӷ���(2^n)����Ϊÿ�ζ�����returnֵ��2���ռ临�Ӷ���(n)��ÿ����
ͬһ��ֵ�������¿���һ�οռ� 







#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin>>a;
priority_queue<int,vector<int>>arr;
int sum=0;
for(int i=0;i<=a-1;i++)
{
	int x;
	cin>>x;
	arr.push(x);
	sum+=x;
}
int tp=arr.top();
if(sum-tp>=tp-1)
cout<<"Yes";
else
cout<<"No";
return 0;
 } 
�������⣬���Լ������ǵ���������ÿ���ж��ٸ���Ȼ��ÿ�γԵĸ��´γԵĲ�����ͬһ��
����ʹ����priority_queue������ʹ�ñ���������Ϊʹ����vector��Ҳֻ��ʹ��push�ķ�������
�����ʵ�����Ȱ����������Ƿָ�������ʣ�µ��������ܲ��뵽��Щ��϶�� 
 





 #include<bits/stdc++.h>
using namespace std;
int main()
{
	int a=0;
	cin>>a;
	stack<char>arr;
	for(int i=0;i<=a-1;i++)
	{
		char x;
		cin>>x;
		if(x=='(')
		arr.push(x);
		else
		{
	     if(arr.empty())
	     {
		 cout<<"No";
	     return 0;
	     }
	     else
	     {
	     	arr.pop();
		 }
		}
	}
	if(arr.empty())
	cout<<"Yes";
	else
	cout<<"No";
	return 0;
 } 
 ()�������⣬Ҫ��(���뵽stack�����)�ٰ�(ȡ�������֤���е�()���������� 
  









#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<string>city;
	map<string,vector<string>>mp;
	int a=0;
	cin>>a;
	for(int i=0;i<=a-1;i++)
	{
		string a,b;
		cin>>a;
		cin>>b;
		if(!mp.count(b))
		city.push_back(b);
		mp[b].push_back(a);
	}

	for(auto i:city)
	{
		cout<<i<<endl;
		for(auto x:mp[i])
		{
			cout<<x<<endl;
		}
	}
	return 0;
 } 
�������⣬��һ��ʼ������ٸ���ݣ�Ȼ������ÿ����ݵ��źͳ��У�����ӡ��ʱ���ճ���
�����˳��һ���Դ�ӡ����������еĵ���
����ʹ����map<string,vector<string>>�����һ�����еĶ������ 








#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N=10;
		int arr1[N][N];
	int arr2[N][N];
	int a,b;
	cin>>a;
	cin>>b;
	int c;
	cin>>c;
	int d,e;

for(int x=0;x<=a-1;x++)
{
	for(int y=0;y<=a-1;y++)
	{
		arr1[x][y]=0;
		arr2[x][y]=0;
	}
}
		for(int i=0;i<=c-1;i++)
	{
cin>>d;
		cin>>e;
		arr1[d-1][e-1]=1;
	}
	for(int x=0;x<=a-1;x++)
	{
		for(int y=0;y<=b-1;y++)
		{
			for(int f=max(0,x-1);f<=min(x+1,d-1);f++)
			{
				for(int g=max(0,y-1);g<=min(y+1,e-1);g++)
				{
				if(arr1[f][g]==1)
				arr2[x][y]+=1;
				}
			}
		}
	}
	for(int x=0;x<=a-1;x++)
	{
		for(int y=0;y<=b-1;y++)
		{
			cout<<arr2[x][y];
		}
		cout<<endl;
	}
	return 0;
}
�򵥻���ɨ�׻����� 











#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	int b;
	cin>>a;
	cin>>b;
		int arr1[10][10];
		int arr2[10][10];
	int c;
	cin>>c;
	int d;
	int e;
	for(int i=0;i<=a-1;i++)
	{
		for(int j=0;j<=b-1;j++)
		{
			arr1[i][j]=0;
			arr2[i][j]=0;
		}
	}
	for(int i=0;i<=c-1;i++)
	{
		cin>>d;
		cin>>e;
		arr1[d-1][e-1]=1;
		arr2[d-1][e-1]=1;
			
		}
		int f;
		cin>>f; 
		while(f--)
		{
			for(int x=0;x<=a-1;x++)
			{
				for(int y=0;y<=b-1;y++)
				{
					if(arr1[x][y]!=0)
					{
						arr2[x][y+1]=arr2[x][y-1]=arr2[x-1][y]=arr2[x+1][y]=1;
					}
				}
			}
			for(int x=0;x<=a-1;x++)
		{
			for(int y=0;y<=b-1;y++)
			{
				if(arr1[x][y]||arr2[x][y])
				arr1[x][y]=1;
			}
		}
		}
	int count=0;
	for(int i=0;i<=a-1;i++)
	{
		for(int j=0;j<=b-1;j++)
		{
			if(arr1[i][j])
			count++;
		}
	}
	cout<<count;
	return 0;
 } 
 ��ˮ���⣬���趨һ�������ĸ��ڿ��Գ�ˮ��ÿһ�������������������ĸ����ӳ�ˮ�����趨
 һ��ʱ����һ���ö��ٸ�������ˮ 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 3��10��||||||||||||||||||||||||||||||||||||||||||||||||| 
 #include<bits/stdc++.h>
using namespace std;
int turn_int(string a)
{
	int res=0;
	for(auto i:a)
	{
		res=res*10+i-'0';
	}
	return res;
}
int is_days(int a,int b)
{
	if((a%4==0&&a%100!=0)||(a%400==0))
		return 29;
	int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	return arr[b-1];
}
string turn_string(int a,int b)
{
string arr1;
while(a)
{
	arr1+=a%10+'0';
	a=a/10;
}
if(arr1.length()<b)
arr1+='0';
	reverse(arr1.begin(),arr1.end());
	return arr1;
}
bool is_hui(int a,int b,int c)
{
	string arr1=turn_string(a,4)+turn_string(b,2)+turn_string(c,2);
	string arr2=arr1;
	reverse(arr1.begin(),arr1.end());
	if(arr1==arr2)
	return 1;
	else
	return 0;
}
int main()
{
	string s;
	cin>>s;
	int year=turn_int(s.substr(0,4));
	int month=turn_int(s.substr(4,2));
	int day=turn_int(s.substr(6,2));
	for(int years=year;years<=9999;years++)
	{
		for(int months=1;months<=12;months++)
		{
			if(years==year&&months<month)
			continue;
			for(int days=1;days<=is_days(years,months);days++)
			{
				if(years==year&&months==month&&days<=day)
				continue;
				if(is_hui(years,months,days))
				{
					cout<<"�أ�"<< turn_string(years,4)+turn_string(months,2)+turn_string(days,2)<<endl;
					return 0;
				}
			}
		}
	}
	 return 0;
}
�������⣬�ؼ���������2��Ҫ��ǰ�ߵ�0���ϣ���ʹ��string��ʱ���ܺ��ֱ�ӵ���'0'+����
Ҫ������֮���±���ʹ�ã�.substr(��ʼλ�ã����ٸ�)���Խ�ȡstring�е�ĳ�Σ���+-'0'����
����int��string��ת�� 









3��11��|||||||||||||||||||||||||||||||||||||||||||||||||||||||||| 
#include<bits/stdc++.h>
using namespace std;
const int N=100;
int arr[N];
int jisuan(int dep)
{
	int sum=1;
	for(int i=1;i<=arr[dep-1]/2;i++)
	{
		arr[dep]=i;
		sum+=jisuan(dep+1);
	}
	return sum;
}
int main()
{
	int n;
	cin>>n;
	arr[0]=n;
	cout<<jisuan(1);
}
�ݹ���㣬������6����һλ���ܴ�����һλ��һ�룬������6�õ�63��631��62��621��61��6 
 
  
  
  
  
  
  

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str="1234abcd";
	int sum;
	int a;
	for(auto i:str)
	{
		if(i>='0'&&i<'9')
		{
			a=i-'0';
		}
		else
		{
			a=i-'a'+10;
		}
		sum=sum*16+a;
	}
	cout<<sum<<endl;
	unsigned int b=0x1234abcd;
	cout<<b;
 } 
��N���Ƹ�Ϊ10���Ƶķ�������ͷȡ��ÿһλ��ÿ��һλ��ǰ�ߵ��������N
�����16���ƣ�ǡ������8λ����ֱ������һ��unsigned int����0x16���Ƶ����֣���Ϊ16����
��ÿ�����ֵ�4Bit,8������һ���ֽڣ�8λ������32bit������4���ֽ� 









#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str="1234";
	int sum=0;
	int a;
	for(auto i:str)
	{
		a=i-'0';
		sum=sum*10+a;
	}
	string arr;
	while(sum)
	{
		arr+=sum%2+'0';
		sum/=2;
	}
	reverse(arr.begin(),arr.end());
	for(auto i:arr)
	{
		cout<<i;
	}

}
10���Ƹĳ�N���Ƶķ����������ö����ƾ������ؼ�����N����ֻ�����һλ����N�ı���������
��stringת��Ϊint����֮��ÿ��%N���ܻ�����һλ����ֵ��Ȼ���ٸ�ԭ�������ֳ���N����
�������һλǰ�ߵ�ÿһλ�����ƶ�λ���Դ������ٽ���һ���µ�arr��ע�����Ҫ��arr����
һ�£���Ϊ�������arr�Ǵ����һλ��ʼ����� 






#include<bits/stdc++.h>
using namespace std;
const int N=100;
int arr[100];
int main()
{
	int a;
	cin>>a;
	for(int i=0;i<=a-1;i++)
	{
		cin>>arr[i];
	}
for(int i=0;i<=a-2;i++)
{
	for(int j=a-1;j>=i+1;j--)
	{
		if(arr[j]<arr[j-1])
		swap(arr[j],arr[j-1]);
	}
}
for(int i=0;i<=a-1;i++)
{
	cout<<arr[i];
}
return 0;
}                       
#include<bits/stdc++.h>
using namespace std;
const int N=100;
int arr[100];
int main()
{
	int a;
	cin>>a;
	for(int i=0;i<=a-1;i++)
	{
		cin>>arr[i];
	}
	int b=a;
while(b--)
{
	for(int i=0;i<=a-2;i++)
	{
		if(arr[i]>arr[i+1])
		swap(arr[i],arr[i+1]);
	}
}
	for(int i=0;i<=a-1;i++)
	{
		cout<<arr[i];
	}
	return 0;
}
ð�����������д���������������������򣬿����ƶ���С��Ҳ�����ƶ�����ϱ��ṩ����
��д��������Ҫע�⣬ ������һ��Ҫ����a-2��i+1����Ȼ�������Ϊa-1��i�Ļ����������ȥ
���������
�������ʹ�õ�һ��for��for��д����Ҫע��i��jҪ�෴������Ϊ�����ͬ����Ļ���i��
arr[0]��ʼŪ��֮��arr[1] �����ݵ���arr[0]���������ʹ��arr[1]�����õ�������arr[2]
������
����while��д�����ʱ��Ҫע������b=a��Ȼ����bȥ������Ȼ�����a�����±�for�е�a������











#include<bits/stdc++.h>
using namespace std;
const int N=100;
int arr[100];
int main()
{
int a;
cin>>a;
for(int i=0;i<=a-1;i++)
{
	cin>>arr[i];
}
int b,j;
for(int i=1;i<=a-1;i++)
{
	int b=arr[i];
	for(j=i;j>=1&&arr[j-1]>b;j--)
	{
		arr[j]=arr[j-1];
    }
    arr[j]=b;
}
for(int i=0;i<=a-1;i++)
{
	cout<<arr[i];
}
	return 0;
}                                          
�������򣬼�����һ������Ȼ��嵽������ߣ�����������ֵ������ڴ˽������Ѷ���������
Ū�������飬Ȼ��ģ��ʹ�ò�������ķ����������򣬹ؼ����ڽ����ʱ���Ǵ�arr[1]����ģ�
�ȱ���arr[1]����ֵ��Ȼ����бȽϣ������ͱ�֤��ǰ��λ��˳�򣬺��ʹ��arr[2]��ʱ����
������arr[2]����ֵ��Ȼ�����arr[2]<arr[1]�Ļ�����ֱ�Ӱ�arr[2]�ĳ�arr[1]������һ��ʼ
�����ֵ�����յ���ߣ�������ؼ�������Ȼ�ڶ���ѭ���Ǵ�i��ʼ����Ҫ�����򣬲��ұ����
ֵҪ�ӽ���for(j)֮ǰ�ͱ�����ϣ�������ʹ�����ֵ
j�����ȴ�����Ȼ������������ڶ���ѭ����ʱ���ֵ��arr[j]��Ҳ�����ڵڶ���ѭ����ʱ��
������ֻ��Ҫ��arr[j]=arr[j-1]�±�дarr[j-1]=b ���� 







#include<bits/stdc++.h>
using namespace std;
const int N=100;
int arr[100];
int partition(int arr[],int l,int n)
{
	int mid=arr[n-1];
	int i=l;
	int j=n;
	while(i!=j)
	{
		while(i!=j&&arr[i-1]<=mid)
		{
			i++;
		}
		while(i!=j&&arr[j-1]>=mid)
		{
			j--;
		}
		if(i!=j)
		swap(arr[i-1],arr[j-1]);
		else
		swap(arr[i-1],arr[n-1]);
	}
	return i;
}
void Quicksort(int arr[],int l,int n)
{
	if(l<n)
	{
	int mid=partition(arr,l,n);
	Quicksort(arr,1,mid-1);
	Quicksort(arr,mid+1,n);
    }
}
int main()
{
	int a;
	cin>>a;
	for(int i=0;i<=a-1;i++)
	{
		cin>>arr[i];
	 }
Quicksort(arr,1,a);
for(int i=0;i<=a-1;i++)
{
	cout<<arr[i];
}
	return 0;
}                       
�������������ʱ�临�Ӷ���0(nlogn),����Ĺؼ�����partition�����������ȡ�����Ե
��һ��ֵ�����Ҷ������ֵ��δ�����м�һ��ֵ��Ȼ���ͷ�����ұ����ֵ��ģ��Ӻ���ͷ��
�����ֵС�ģ�Ȼ����л������ȵ������ҵĽ�Ӧ���ˣ��������ֵ�ͽ�Ӧ�ϵ�ֵ��������Ϊ
��������ǰ���Һ�ߣ����Խ�ͷ��ֵ�Ǵ��ڵ������ֵ�Ŀ��Ի����������Ͱѱ����С��ȫ��
��������ߣ���������ȫ���������ұߣ�ע�ⷵ��ֵ������ڼ���Ϊ���±߲��ܼ����ֱ�
�����Ϊ�����ߺ��ұ߽��е���
���η�















#include<bits/stdc++.h>
using namespace std;
const int N=100;
int arr[N];
int brr[N];
void guibing(int arr[],int l,int n)
{
	if(l==n)
	return;
	int mid=(l+n)/2;
	guibing(arr,l,mid);
	guibing(arr,mid+1,n);
	int pa=l;
	int pm=mid+1;
	int pb=l;
	while(pa<=mid||pm<=n)
	{
		if(pa>mid)
		brr[pb++]=arr[pm++];
		else if(pm>n)
		brr[pb++]=arr[pa++];
		else
		{
			if(arr[pa]>arr[pm])
			brr[pb++]=arr[pm++];
			else
			brr[pb++]=arr[pa++];
		}
	}
	for(int i=l;i<=n;i++)
	{
		arr[i]=brr[i];
	}
}
int main()
{
	int a;
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		cin>>arr[i];
	}
	guibing(arr,1,a);
	for(int i=1;i<=a;i++)
	{
		cout<<arr[i];
	}
	return 0;
 } 
 �鲢���������ҵ�������������м�Ϊ��ģ�Ȼ��ֳ����룬ÿ��������ã�Ȼ���ٺ͵�һ��
 Ҫע������pb�Ǵ�l��ʼ�ģ�ʱ�临�Ӷ�Ҳ��0(logn) 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 3��12��||||||||||||||||||||||||||||||||||||||||||||||||||||| 
 
 
 #include<bits/stdc++.h>
using namespace std;
const int N=1000;
int arr[N];
int main()
{
	int a;
	cin>>a;
	int b;
	int max;
	for(int i=1;i<=a;i++)
	{
		cin>>b;
		arr[b]++;
		if(max<b)
		max=b;
	}
	for(int i=1;i<=max;i++)
	{
		if(arr[i]!=0)
		cout<<i<<":"<<arr[i]<<endl;
	}
	return 0;
}
Ͱ���򣬼����趨��ÿһ��Ԫ�أ�Ȼ�������Ԫ�ؾ������Ԫ�ض�Ӧ��arr++,��������9����
arr[9]����2������ӡ����ʱ���ӡÿ��Ͱ��ľ�������Ͱ�������Ͱ�ڲ�һ��Ҫ�ȸ�Ͱ��
���� 







3��13��||||||||||||||||||||||||||||||||||||||||| 
#include<bits/stdc++.h>
using namespace std;
vector<int>arr[10000];
int main()
{
	int a;
	cin>>a;
	int b;
	for(int i=1;i<=a;i++)
	{
		cin>>b;
		arr[b/1000].push_back(b);
	}
	for(int i=1;i<=10;i++)
	{
	sort(arr[i].begin(),arr[i].end());
	}
	for(int i=1;i<=10;i++)
	{
		arr[i].erase(unique(arr[i].begin(),arr[i].end()),arr[i].end());
	}
	for(int i=1;i<=10;i++)
	{
		for(auto z:arr[i])
		{
			cout<<z;
			cout<<endl;
		}
	}
	return 0;
}
������Է�Χ�Ƚϴ�ʱ���д�������������ó�����ǿ��Χ�ɱ���ԣ�Ȼ������vector<int>[]
���ֶ�ά�������ʽ���д�ţ�[]��ߵ���Ͱ��vector��Ͱ��ߵ����飬�ڴ�����sort��erase
���ܰ�˳���ظ��صõ�˳�� 


















#include<bits/stdc++.h>
using namespace std;
int main()
{
	const int N=10000;
	int p=1e9+7;
	int arr[6][N];
	int prefix[6][N];
	int a,b;
	cin>>a>>b;
	for(int i=1;i<=a;i++)
	{
		cin>>arr[1][i];
	}
	for(int i=2;i<=6;i++)
	{
		for(int j=1;j<=a;j++)
		arr[i][j]=arr[i-1][j]*arr[1][j];
	}
	for(int i=1;i<=6;i++)
	{
		for(int j=1;j<=a;j++)
		prefix[i][j]=prefix[i][j-1]+arr[i][j];
	}
	int l,n,k;
	while(b--)
	{
	cin>>l>>n>>k;
	cout<<(prefix[k][n]-prefix[k][l-1]+p)%p<<endl;
	}
}
ǰ׺�ͣ������prefix[6]��ʾ�ӵ�һ��ֵһֱ�ӵ�arr[6]��arr[6]=prefix[6]-prefix[5]��
�����p��ģ������Щ���ǿ��Ҫģ��һ��������Щʱ��ģ����Ǹ��ģ���Ҫ�����Ļ������ȼ�һ
��P,Ȼ����ģp
ǰ׺�Ͳ��������߲���޸� 





#include<bits/stdc++.h>
using namespace std;
const int N=100;
char arr[N];
int prefix[N];
int main()
{
	cin>>arr+1;
	int a=strlen(arr+1);
	for(int i=1;i<=a;i++)
	{
		prefix[i]=prefix[i-1]+(arr[i]=='L'?1:-1);
	}
	int ans=0;
	for(int i=1;i<=a;i++)
	{
		for(int j=i;j<=a;j++)
		{
			if(prefix[j]-prefix[i-1]==0)
			{
				ans=max(ans,j-i+1); 
			}
		}
	}
	cout<<ans;
	return 0;
}
ƽ�⴮���⣬������L��Q,һ������������ȵ�L��Q��Ϊһ��ƽ�⴮ 





3��15��||||||||||||||||||||||||||||||||||||||||||||||||||||||
#include<bits/stdc++.h>
using namespace std;
const int N=1000;
int arr[N];
int brr[N];
int main()
{
	int a,b;
	cin>>a>>b;
	for(int i=1;i<=a;i++)
	{
		cin>>arr[i];
	}
	for(int i=1;i<=a;i++)
	{
		brr[i]=arr[i]-arr[i-1];
	}
	while(b--)
	{
		int l,r,n;
		cin>>l>>r>>n;
		brr[l]+=n;
		brr[r+1]-=n;
	}
	for(int i=1;i<=a;i++)
	{
		arr[i]=arr[i-1]+brr[i];
		cout<<arr[i];
	}
	return 0;
}
��֣���brr[i]=arr[i]-arr[i-1]�������1��ʼ�ǵ�һλ��brr[l]+=x�ͱ�ʾ��l�����һλ��
ÿһλ����x����Ϊ�ڸ���һ������x֮���ں�������Ҫ��ʾarr[i]��Ҫ��arr[i-1]+brr[i]
������������ÿһλ������x�������������l��r����x����Ҫ��brr[l]+=x֮��д��brr[r+1]-=x
��ʾ��r+1�����-��x���������ܱ�ֻ֤��l��r����x 
Ҫע�����ﴴ������Ҫ��int main()֮ǰ������������ܻ���������ݵ���� 









#include<bits/stdc++.h>
using namespace std;
vector<int>arr;
int main()
{
	int a;
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		int b;
		cin>>b;
		arr.push_back(b);
	}
	sort(arr.begin(),arr.end());
	arr.erase(unique(arr.begin(),arr.end()),arr.end());
	for(auto i:arr)
	{
		cout<<i;
	}
	cout<<'\n';
	int b;
	cin>>b;
	cout<<*lower_bound(arr.begin(),arr.end(),b);
	return 0;
}
��ɢ��������������������ȥ����ͬԪ�أ���������ʣ��Ԫ������������ 















#include<bits/stdc++.h>
using namespace std;
vector<int>arr;
int main()
{
	int a;
	cin>>a;
	int b;
	for(int i=1;i<=a;i++)
	{
		cin>>b;
		arr.push_back(b);
	}
	sort(arr.begin(),arr.end());
	int ans=arr[1]-arr[0];
	for(int i=1;i<=a-1;i++)
	{
		ans=max(ans,arr[i]-arr[i-1]);
	}
	cout<<ans;
}
ս����С���⣬���Ѹ�����Ԫ�ط�Ϊ���ӣ�������һ�����ս������һ����Сս�������С
����������Ȼ�������ڵ�������ֵ��С���趨Ϊ����ͬʱ������˼·���ڽ����������
�����ʱ��Ҳ���Կ����������ٽ������










#include<bits/stdc++.h>
using namespace std;
priority_queue<int,vector<int>,greater<int>> arr;
int main()
{
	int a;
	cin>>a;
	int b;
	for(int i=1;i<=a;i++)
	{
		cin>>b;
		arr.push(b);
	}
	int sum=0;
	int c,d;
	for(int i=1;i<=a-1;i++)
	{
		c=arr.top();
		arr.pop();
		d=arr.top();
		arr.pop();
		arr.push(c+d);
		sum+=c+d;
	}
	cout<<sum;
 } 
�ϲ���С���⣬��ÿ�κϲ��������ֶ�Ҫ����Ӧ���ֵ�Ǯ��ʹ�������Ǯ����С���ؼ����ڴ���
һ��priority_queue��ÿ��ȡ��С��������Ȼ����ӣ�����������С��ΪTop,����Ҫ��greater<int>






3��17��||||||||||||||||||||||||||||||||||||||||||||||||||||
#include<bits/stdc++.h>
using namespace std;
vector<int>arr;
int main()
{
	int a,b;
	cin>>a>>b;
	int c;
		for(int i=1;i<=a;i++)
	{
		cin>>c;
			arr.push_back(c);
	}
	sort(arr.begin(),arr.end());
	int sum=0;
	int l=0;
	int n=a-1;
	while(l<=n)
	{
		sum+=1;
		if(l!=n)
		{
			if(arr[l]+arr[n]<=b)
			{
				l++;
				n--;
			}
			else
			n--;
		}
		else
		l++;
	}
	cout<<sum;
}
����������װ��һ������������⣬����һ����������������㹻װ����װ������������������
װ����װ��һ�����������Ҫ���ٸ����ӣ��ؼ�����������Ȼ���������С���������м��� 









#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
	int a;
	cin>>a>>s;
	sort(s.begin(),s.end());
	if(s[0]==s[s.size()-1])
	{
	for(int i=1;i<=(s.size()/a)+(s.size()%a?1:0);i++)
	cout<<s[i];	
	}
	else
	{
		if(s[0]==s[a-1])
		{
			for(int i=a-1;i<=s.size()-1;i++)
			cout<<s[i];
		}
		else
		cout<<s[a-1];
	}
}
���ǹ����⣬�������ַ�����С�� ע��s.size()%a?1:0������ʣ���������ĺ�߶��ܸ�1��











#include<bits/stdc++.h>
using namespace std;
int arr[100];
int main()
{
	int a;
	cin>>a;
	for(int i=0;i<=a-1;i++)
	{
		cin>>arr[i];
	}
	int l=0;
	int r=a-1;
	while(l<=r)
	{
		if(arr[l]!=arr[r])
		{
			cout<<"�ǻ���";
			return 0; 
		 } 
		 l++;
		 r--;
	}
	cout<<"����";
	return 0;
 } 
 ˫ָ��ĵ�һ����ʽ������ͷ��β���м俿£
 
 
 
 
 
 
 
 
 
 
 #include<bits/stdc++.h>
using namespace std;
int arr[100];
int main()
{
	int a,b;
	cin>>a>>b;
	for(int i=1;i<=a;i++)
	{
		cin>>arr[i];
	}
	int ans=a+1;
	for(int i=1;i<=a;i++)
	{
		int sum=0;
       for(int j=i;j<=a;j++)
       {
       	sum+=arr[j];
       	if(sum>=b)
       	ans=min(ans,j-i+1);
       	if(sum>=b)
       	break;
	   }
	   
	}
	if(ans>a)
	cout<<0;
	else
	cout<<ans; 
 } 
 ˫ָ��ĵڶ�����ʽ��һ����ǰ���ߣ�һ���ں���� 
 #include<bits/stdc++.h>
using namespace std;
int arr[100];
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	for(int i=1;i<=a;i++)
	{
		cin>>arr[i];
	}
	int ans=0;
for(int i=1;i<=a;i++)
{
	int count=0;
	for(int j=i;j<=a;j++)
	{
		if(arr[j]>=b)
		count++;
		if(count>=c)
		ans+=a-j+1;
		if(count>=c)
		break;
	 } 
}
cout<<ans;
 } 
 
 
 
 
 
 
 
 
 
 
 
 
 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[200];
	for(int i=0;i<200;i++)
	{
		arr[i]=4*i+6;
	}
	int a;
	cin>>a;
	int l=0;
	int r=199;
	while(l<r)
	{
		int mid=(l+r)/2;
		if(arr[mid]<a)
		l=mid+1;
		else if(arr[mid]>a)
		r=mid-1;
		else
		{
			cout<<mid;
			return 0;
		}
	}
	cout<<"miu";
	return 0; 
 } 
 ���֣���ÿ�δ��м�ȡֵ����ȥһ�� 
 
 
 
 
 
 
 
 
 
 
 
 
 #include<bits/stdc++.h>
using namespace std;
int arr[100];
int a,b,c;
int check(int mid)
{
	int res=0;
	int lst=0;
	for(int i=1;i<=a;i++)
	{
		if(arr[i]-arr[lst]<mid)
		{
			res++;
			continue;
		}
		lst=i;
	}
	if(b-arr[lst]<mid)
	return a+1;
	return res;
}
int main()
{
	cin>>a>>b>>c;
	for(int i=1;i<=a;i++)
	{
		cin>>arr[i];
	}
	int l=1;
	int r=b;
	while(l+1!=r)
	{
		int mid=(l+r)/2;
		if(check(mid)<=c)
		l=mid;
		else
		r=mid;
	}
	cout<<l;
 } 
 ��Ծ��ʯͷ���⣬������һ�����ȵĵ�·������ʯͷ��λ�ú�����ܰ��߼���ʯͷ����ʹ��̵�
 ÿ����Ծ�������
 �ٿ���while��ߵ�����ʱ�����ǵ��˿���l��r���ڣ�(l+r)/2�Ľ������Զ��l����ôl����û��
 �ƶ�������while���д��(1+1!=r)�����ж�midʱ,mid�������ľ��� 
 ��Ϊÿ���Ǵ�С�������У�Ҫ�ҵ�Ҳ�����ֵ�����Ե�mid����ȡ����ʱ��lҪ����mid,��������
 ��l����Ϊ������ұ��и��õ�mid,l�Ż��ȥ������ֻ���ƶ�r
 дcheck������ʱ��arr[i]-arr[lst]��<mid�������û�ɹ���ֻ��i++����������˲�������ʯͷ
 ����lst��i��++��������������һ��ʯͷ
 Ҫע��������lst���жϣ���lst���ص��b�ľ���<mid����������˵����������mid�ǲ����Ե� 
  
  
  
  
  

���죺
1.��(1/x)+(1/y)+(1/z)=1/n,����������һ���Ϊx=2n,y=3n,z=6n 
Ҳ������1/n=(1/(n+1))+1/(n(n+1))
2.�����Ȳ����е�һ���֣����ʹ���������̵Ȳ����У������ʽ����ø�����������������
��������Լ��
3.�����������λ��ͬ��Ϊ1����ͬ��Ϊ0
4.s>0��û���κ�һλ��0�����ܱ��κ�һλ���������е�һ����Ϊ��λΪ3,����λΪ2����2��
3�ı�������������е�һ��2�ĳ�5
4.ʹ(a@b)+(b@c)+(c@a)=n,@���������abcȫΪ������ȫΪż����nΪż����һ��Ϊ�������
��������������ӣ�n����ż����һ��ż��Ҳͬ��������nһ��Ϊ������������õķ�����������
a=b=n>>1��c=0����Ϊ�Լ�@�Լ���0��a@0=a,�����a+b�����ڷ��˶�����������n 







λ����
^��������˼������������ͬ��һλΪ0������ͬ��Ϊ1��a^a=0,a^0=a,��x^y=z����z^y=x,z^x=y
��Ϊx^y^y=x^y������Ƿ��Ͻ����ɵģ�������λ��
�ж�a�Ƿ�Ϊ������a&1,Ϊ1Ϊ����
��ȡa��ÿһλ��a&1��Ȼ����a>>
�޸�a�е�ĳһλΪ1��x|(1<<i)
�ж��Ƿ�Ϊ�ݴη���x&(x-1),Ϊ0��Ϊ�ݴη�
��ȡ���λ�õ�1��lowbit=x&-x����x=0101000,��lowbit(x)=0001000��ȡ�����λ�õ�1��ʣ�²�0
��˵����x��32λ�Ķ����Ƶ�����ʱ���������漰����>>��ʹ�ã�Ҫע���x�趨unsigned int
�����ڷ���λΪ1��ʱ��>>���Զ���1














#include<bits/stdc++.h>
using namespace std;
int arr[100];
int prefix[100][100];
int  main()
{
	int a,b;
	cin>>a>>b;
	for(int i=1;i<=a;i++)
	{
		cin>>arr[i];
	}
	for(int i=1;i<=a;i++)
	{
		for(int j=0;j<10;j++)
		prefix[j][i]=prefix[j][i-1]+((arr[i]>>j)&1);
	}
	while(b--)
	{
	int l,r;
	cin>>l>>r;
	int sum=0;
	for(int j=0;j<10;j++)
	{
		sum+=(prefix[j][r]-prefix[j][l-1]?1:0)<<j;
	}
	cout<<sum<<endl;
}
	return 0;
}
����һ�����飬���ո����ķ�Χ��ÿλ���л����� 









#include<bits/stdc++.h>
using namespace std;
const int N=1000;
int arr[N];
int prexor[N];
int main()
{
	int a;
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		cin>>arr[i];
	}
	for(int i=1;i<=a;i++)
	{
		prexor[i]=prexor[i-1]^arr[i];
	}
	int ans=a*(a+1)/2;
	for(int i=1;i<=a;i++)
	{
		for(int j=0;j<=200;j++)
		{
			int sq=j*j;
			for(int k=1;k<=i;k++)
			{
				if((prexor[k-1]^prexor[i])==sq)
				ans--;
			}
		}
	}
	cout<<ans;
 } 
 ��һ���������ͳͳ����ص�����k��i�����͵���prexor[k-1]^prexor[i] 
 
 
 
 
 
 
 
 
 #include<bits/stdc++.h>
using namespace std;
const int n=5;
int arr[n+1];
bool brr[n+1];
void dfs(int dep)
{
	if(dep==n+1)
	{
		for(int i=1;i<=n;i++) 
		{
			cout<<arr[i]<<' ';
		}
		cout<<'\n';
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(brr[i])
		continue;
		arr[dep]=i;
		brr[i]=1;
		dfs(dep+1);
		brr[i]=0;
	}
}
int main()
{
	dfs(1);
}
ȫ��������,���������˻��ݷ�����DFS�������������������������Ӽ����������������;�������
��ɢ�����������;���ÿ��ֻ��ѡ��0��1��Ȼ��������Ҳ���
����ʹ��Brr������м�¼������һ����ʹ����һ��һ�������Ǿͼ�¼��brr֮�У��±��ٱ���n��
��ʱ���⵽��¼����������ʹ��֮��Ĺؼ��������Ҫ��brrɾ����¼������������������ʹ�� 






#include<bits/stdc++.h>
using namespace std;
int a;
const int N=10;
int vis[N][N];
int ans=0;
void dfs(int dep)
{
	if(dep==a+1)
	{
		ans++;
		return;
	}
	for(int i=1;i<=a;i++)
	{
		if(vis[dep][i])
		continue;
		for(int j=1;j<=a;j++)
		vis[j][i]++;
		for(int j=dep,k=i;j>=1&&k>=1;j--,k--)
		vis[j][k]++;
		for(int j=dep,k=i;j>=1&&k<=a;j--,k++)
		vis[j][k]++;	
		for(int j=dep,k=i;j<=a&&k>=1;j++,k--)
		vis[j][k]++;	
		for(int j=dep,k=i;j<=a&&k<=a;j++,k++)
		vis[j][k]++;
		dfs(dep+1);
		for(int j=1;j<=a;j++)
		vis[j][i]--;
		for(int j=dep,k=i;j>=1&&k>=1;j--,k--)
		vis[j][k]--;
		for(int j=dep,k=i;j>=1&&k<=a;j--,k++)
		vis[j][k]--;	
		for(int j=dep,k=i;j<=a&&k>=1;j++,k--)
		vis[j][k]--;	
		for(int j=dep,k=i;j<=a&&k<=a;j++,k++)
		vis[j][k]--;
	}
}
int main()
{
	cin>>a;
	dfs(1);
	cout<<ans;
	return 0;
}
�ʺ����⣬����һ��n*n�ı���ڣ�ÿ��ֻ�ܷ�һ���ʺ��Դ�Ϊ�Ļ������Σ���������������λ
�ò����ٷ������ģ���һ���ж����ַŷ�
�ڴ�����ٲ�֮���±߾Ͳ��ý�ÿ�ж�����++����Ϊ�ڴ����ʱ����ǰ���ÿ��һ���Ĵ��룬����
���ڵ��в����ٷ��룬��Ѱ�ҵ�ʱ��ֻ�����з��µĲ��ܽ������У���������Ϊn+1��ʱ�򣬾ʹ���
��������ǿ��Եģ���������ÿ�ν�����һ��dfs��֮�����������������������������������
����ķ�֧������֮��Ž��еģ�������++��ʱ�򣬲�������=1���棬��Ϊ������һ���ʺ�֮��
���ֱ������Ϊ0�Ͱ������ʺ������ǵķ�ΧҲ������ 







#include<bits/stdc++.h>
using namespace std;
int a;
const int N=15;
int arr[N];
int dfn[N];
int mindfn;
int maxi=1;
int idx;
int dfs(int b)
{
	dfn[b]=++idx;
	cout<<b<<':'<<dfn[b]<<endl;
	if(dfn[arr[b]])
	{
		if(dfn[arr[b]]>=mindfn)
		{
		cout<<':'<<dfn[b]<<'-'<<dfn[arr[b]];
		return dfn[b]-dfn[arr[b]]+1;
	}
		return 0;
	}
	return dfs(arr[b]);
}
int main()
{
	cin>>a;
	for(int i=1;i<=a;i++)
	cin>>arr[i];
	for(int i=1;i<=a;i++)
	{
		mindfn=idx+1;
		maxi=max(maxi,dfs(i));
		cout<<endl;
	}
	cout<<maxi;
	return 0;
 } 
ΧȦ���⣬ÿ����ֻ�ܳ��һ���ˣ�����Ȧ����Сֵ���ؼ����ڸ�һ��ʼ��ÿ����ţ�����ⲽ
�б����Χ��Ȧ������Ҫ�ñ�Ŵ�����С����ʼ������Ҫ 









#include<bits/stdc++.h>
using namespace std;
int a;
const int N=10;
char arr[N][N];
int vis[N][N];
int x[4]={0,0,1,-1};
int y[4]={1,-1,0,0};
int cl=1;
int ans=0;
set<int>cnt;
void color(int i,int j)
{
	vis[i][j]=cl;
	for(int m=0;m<=3;m++)
	{
		if(arr[i+x[m]][j+y[m]]=='#'&&vis[i+x[m]][j+y[m]]==0)
		color(i+x[m],j+y[m]);
	}
}
int main()
{
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=a;j++)
		cin>>arr[i][j];
	}
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=a;j++)
		{
		if(arr[i][j]=='#'&&vis[i][j]==0)
		{
		color(i,j);
		cl++;
	    }
	    }
	}
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=a;j++)
		{
			if(arr[i][j]=='.'&&vis[i][j]==0)
			{
				for(int m=0;m<=3;m++)
				{
				arr[i+x[m]][j+y[m]]='.';
				}
			}
		}
	}
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=a;j++)
		{
			cout<<arr[i][j]<<' ';
		}
		cout<<endl;
	}
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=a;j++)
		{
			if(arr[i][j]=='#')
			cnt.insert(cnt.begin(),vis[i][j]);
		}
	}
	ans=cnt.size();
	cout<<ans;
}
��û���⣬��һ��ʼ�к���͵��������ܱ��ĸ������û���죬����û��֮���м�����(ԭ����
һ�����������û���������򻹰���һ������) 









#include <bits/stdc++.h>
using namespace std;
int a;
int b;
vector<int>arr;
const int N=15;
int brr[N][N];
int depen[N];
int ans=0;
void cnt(int i,int dep)
{
  if(brr[dep][0]==0)
  {
    brr[dep][0]=i;
    depen[dep]++;
    i=0;
    return ;
  }
  for(int j=0;j<depen[dep];j++)
  {
    if(i%brr[dep][j]==0)
    {
	cnt(i,dep+1);
    i=0;
    return; 
    }
  }
  if(i!=0&&brr[dep][0]!=0)
  {
    brr[dep][depen[dep]]=i;
    depen[dep]++;
    i=0;
    return;
  }
}
int main()
{
  cin>>a;
  for(int i=1;i<=a;i++)
  { 
    cin>>b;
    arr.push_back(b);
  }
sort(arr.begin(),arr.end());
for(int i=0;i<a;i++)
{
  cnt(arr[i],0);
}
for(int i=0;depen[i]!=0;i++)
ans++;
cout<<ans;
  return 0;
}
�������⣬��ͬһ���в����໥����������Ҫ���ٶ��� 






DFSʹ�õ�ʱ�����Ҫ�����Ż��������������ÿһ������ֵ��Ȼ���������ķ��ش����ж����������
�ǲ��������ֵ�����о�ֱ��return 




stoi(string)�ܽ�stringת����int���ͣ�������ת����Int
to_string(����)�ܽ�int��longlongת����string 








#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e6+1;
vector<int>arr;
int brr[N];
int b=0;
signed main()
{
	int a;
	int n=0;
	int f=0;
	int g;
	memset(brr,0,sizeof(brr));
	for(int i=2;i<=N;i++)
	{
		if(brr[i]==0)
		{
			arr.push_back(i);
			a=i*(-1);
			arr.push_back(a);
			n++;
		}
		for(int j=i+i;j<=N;j+=i)
		{
			brr[j]=1;
		}
	}
	sort(arr.begin(),arr.end());
	int d;
	cin>>b;
	cin>>d;
	const int c=b+1;
	int crr[c];
	int e;
	for(int i=1;i<=b;i++)
	{
		cin>>e;
		crr[i]=e;
	}
	int x,y,z;
	for(int i=1;i<=d;i++)
	{
		cin>>x;
		cin>>y;
		cin>>z;
		if(x==1)
		{
			for(int j=1;j<=b;j++)
			{
				if(j%y==0)
				{
					auto p=lower_bound(arr.begin(),arr.end(),crr[j]);
					g=p-arr.begin();
					if(g>=z)
					{
						if(*p==crr[j])
						crr[j]=*(p-z);
						else
						crr[j]=*(p-z+1);
						if(crr[j]<0)
						crr[j]=0;
					}
					else
					crr[j]=0;
				}
			}
		}
		if(x==2)
		{
			for(int j=1;j<=b;j++)
			{
				if(j%y==0)
				{
					int*p=lower_bound(arr,arr.end(),crr[j]);
					if(*p==crr[j])
					{
						f=-1;
					}
					else 
					f=0;
					g=arr.end()-p+f;
					if(g>=z)
					{
						if(*p==crr[j])
						crr[j]=*(p+z);
						else
						crr[j]=*(p+z-1);
					}
					else
					crr[j]=1;
				}
			}
		}
	}
	for(int i=1;i<=b;i++)
	{
		cout<<crr[i]<<' ';
	}
	return 0;
 }

