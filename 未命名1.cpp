#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"bits/stdc++.h"<<endl;
	cout<<'A';
	return 0;
}
cout将字符串输出，和printf一个意思，每个要输出的东西前都要加个<<
 
 
 
 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a=1.235;
	printf("%.1lf",a);
	printf("%.2lf",a);
	return 0;
}
%lf用来输出浮点型，%.数字lf代表小数点后面保留几位，这里保留的时候是经过四舍五入的
%lld用来输入long long类型 






#include<bits/stdc++.h>
using namespace std;
int main() 
{
	char a[10];
	scanf("%[^\n]",a);
	printf("%s",a);
	return 0;
}
字符串本来就是地址，所以scanf的时候不需要使用&，使用的时候如果使用了空格在下面读取的
时候就会只读到第一个空格前边，而如果想忽略空格，就要在输入的时候不用&s，而用%[^\n]，
表示忽略空格 





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
在使用cin,cout的时候因为要判断类型等内部原因，效率比scanf,printf慢，取消同步流可以加速
写上ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);即可 
cin和cout是以流的方式，好处是不用在输入输出的时候标注类型%d,%s，但不建议用在字符输入出
在遇到使用空格或回车的时候就可以输入下一个 
使用double的时候如果不使用<<fixed<<setprecision(数字) 就是完全按照输入的输出(保默认小
数点留5个)而使用了<<fixed<<precision(数字)的时候就是按照里边的数字进行小数点后输出
在输入输出字符串的时候，如果按照上边的方法就会遇到空格就只读取第一个回车前的，而如果想
要继续使用cin和cout，就要使用string定义字符串，然后get(cin,名称) 就能保证读取空格 
string与char/int[]不同的是string并没有最后的/0








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
cin>>arr+1表示从arr[1]开始输入，cout<<arr+2表示从arr[2]开始输出 




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
string的五种使用方法，头文件#include<string>。
解决了arr2不能直接给arr1赋值的问题
使用str.substr(第几个，几位置)能将得到str的某几位
使用const char*arr和str(arr)能将数组arr的内容赋给str
使用str(数量，'字符')能把这些字符赋给str








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
在使用scanf的时候取得的是arr的地址，相当于把arr设置为const char*arr，此后在只用printf
打印的时候因为string是c++的用法，printf是c的用法，要把str变为c的用法，使用到了函数
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
检测string的长度，用str.length()或str.size(),要注意括号不能丢，这里不带\0





 
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
 进行string的拼接，可以使用+或者.append()的形式，但是要注意在这里都是以字符串
 的形式拼接，即即使拼接的是字符，也要用双引号
 
 
 
 
 
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
查找str里边是否存在字符串的时候，使用.find(字符串)函数，在使用的时候给a要设置类型
size_t且find()内部要使用""，因为查找的是字符串，返回值是在str中那个字符串第一个的
为序，是从0开始的
下边判断的时候std::string::npos是固定的，其数值等于-1，当然也可以直接使用-1






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
改变string的时候，使用.replace(第几个字符，改原来中几个，字符串)的形式，如果改的数量
超过原本的长度也没关系 





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
 在比较字符串长度的时候可以使用函数str1.compare(str2)，如果str1比str2小，返回值是-1
 相等是0，否则是1，而比较的方式是从第0个位置比较，a<b以此类推，前一个相等则比较下一个 
 也可以直接使用<>==进行比较，注意在此时不是用=号，而是用==，=是赋值用的 
 
 
 
 
 
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
使用auto枚举遍历字符串，for(auto 变量:字符串)就能让变量变成字符串的每一个字符进行遍历
在使用的时候取地址才能真正改正字符串的值




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
 倒序输出的时候通常有三种方法
1.直接从后往前读取
2.使用reverse(字符串.begin(),字符串.end())，能直接将字符串实现翻转
3.使用swap(str[i],str[str.length()-i-1])配合for循环，将对称的调换 
reverse和swap都是和sort一样最后一个是最后一个地址的下一位 








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
sort是用来排序的，时间复杂度为(nlogn)，sort的使用方法为(起始地址,最后一个地址的下一位
，排列方法)，后面的大小于号可以不写，默认为小于号，需要大于号的时候再写以下方法 
这里有两种使用方法 
第一种是自己创造数组，在sort里边输入数组的地址，即arr+数字
第二种是使用迭代器vector<int>arr={}是一种创建数组的方式，不需要写清该类型多少个数
在sort中使用的方法类似于string ，但是使用长度函数的时候不能使用.length()，只能使用
.size()的方式 






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
以上为两自定义sort的方法
第一种是调用了一个bool函数，传递int&m和int&n在return的时候规定大小
第二种是写一个lambda(匿名函数），只能在此处调用，前方不需要写函数名，但要写[]，里边
的&可加可不加，但里边的int&m和int&n是必须加上&的  







#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int u,v;
	bool operator<(const Node &m)const
{
	return u==m.u?v<m.v：u<m.u; 
}
}
结构体重载，operator<和最后的const是固定的，在这里运用了先比较u在比较n，即在返回时
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
 取最大值最小值，两个数用min(,)和max(,),超过两个用min({})和max({}) 







#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr={2,1,5,3};
cout<<*min_element(arr.begin(),arr.end())<<endl;
cout<<*max_element(arr.begin(),arr.end());
return 0;
 } 
 min_element和max_element可以找到其中的最大和最小值，在里边要输入起始地址和最后一个
 地址的下一位，返回的也是地址，是最大或最小值的地址，所以要进行解引用操作
 
 
 
 
 
 
 
 
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
nth_element(.begin(),.begin()+数字,.end())用来让第几大的数字在第几位，.begin()加的数
字表示从第0位开始第几大，也可理解为前边有多少个数字，在这里其他位置的数字的顺序的乱的










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
这里先设定最大最小值为arr[0]，然后通过for循环用min()和max()找到最大最小值，也可以用
min_element()和max_element()然后解引用直接得到最大最小值 
在最后如果要保留小数，如果之前没有设置浮点类型，那就在最后乘1.0 






3月5号|||||||||||||||||||||||||||||| 
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
binary_search(起始地址，最后地址的下一个地址,查找的数字)是一个能在数组里查找有没有这
个元素的函数，返回值是1或0
这里使用的是二分查找，且只对单调数列有效







#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>arr={1,2,3,4,5};
	cout<<*lower_bound(arr.begin(),arr.end(),2)<<endl;
	cout<<*upper_bound(arr.begin(),arr.end(),2);
	return 0;
 } 
 lower_bound(起始地址，结束地址下一位，数值)是用来查找数组里大于等于这个数值的值，但
 是这里的返回值不是数值，而是地址，需要进行解引用操作，想得到在数组中的为序在减去起
 始地址即可 
 这里用的也是二分法，只能查找单调数列，如果不是单调的可以先用sort把数列变成单调的再
 使用
 upper_bound和low_bound使用的方法一样，只不过upper_bound是用来查找大于这个数值的值 
 
 
 
 
 
 
 
 
 
 
 
 
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
next_permutation(起始地址，最终地址的下一位)是将一开始的再按照123，132，213，231，
312，321的顺序再排一位， 返回值是1或0，如果排到321了就没有下一位了，再排一次那返回
值就是0但是还是将数组排成了123的形式 
prev_permutation就是倒过来排一次，而这次是排到了321的下一个返回0 







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
islower(ch)是用来查看是否为小写的，isupper是用来查看是否为大写的，返回值都是Bool
tolower(ch)和toupper(ch)都是将大小写进行转化的，返回值是字符 
 
 
 
 
 
 
 
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
以上为大小写互换的实现，是通过ASCII码值来实现 







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
memset(地址,改成什么整数,多少个字节)用来改变数组内的数,改变的是1byte，一个byte是8
个bit,一个整形是4个byte,而sizeof在取大小的时候取得的是4byte,所以假如全都改成1,会
把数字改为00000001000000010000000100000001,所以一般只有在改成0的时候会方便一些,
对于上述16进制而言,0x代表16进制,16进制每个位置代表4个bit,上边的3f,前边的3代表3个
16,一个16是10000,3个就变成了0011,后边的f代表15,就变成了1111,所以3f就变成了00111111
每个byte都变成了0x3f,在用bitset<32>(数字)的时候显示32位就变成了4个00111111 
memset虽然返回值仍然是arr 









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
unique(起始地址,最终地址的下一位)能够将相邻重复的放在最后,关键点是相邻,不相邻则不能放
过去,所以如果不单调的话还要用sort进行一下排序,放在最后也不是真把那几个重复的放在了最
后,而是把最后几个复制到了最后
unique的返回值是第一个被放在最后的地址,如果想要这个数字彻底的消灭这些多余的,要用
.erase(第一个被放在最后的地址,最后地址的下一位)来进行删除








3月6号|||||||||||||||||||||||||||||||||||||||||||||||||| 
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
pair可以将两个不同的类型的放在一起，类似于struct，在建造的时候如果要嵌套pair，则要写
成pair<pair<>,pair<>>的形式，在下边创建的时候要写成pa(make_pair(),make_pair())的形式
访问的时候可以嵌套访问




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
pair相同类型在排序的时候遵从第一位先排序，如果第一位一样再排第二位，以此类推的形式
顺序是升序，.push_back()的意思是在最后插进一位 











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
vector是用来创建动态数组的，创建的大小不用设定，之后修改也可以自己改变大小，可以用
.push_back(内容)，来在最后一个位置添加，使用.pop_back(),可以删除最后位置的一个元素， 
可以arr.resize()，来改变大小，但是如果设置完之后再用puch_back来添加元素的话，那么就
将添加在整个arr的最后一个了，中间建造的会有空余。用.erase(元素)可以删除制定元素，可
以删除单个，也可删除一段，如果想删除arr[1]，则在里边写上.begin()+1，用.insert（位置
，元素)可以在一个位置增添一个元素。用.empty()可以检测动态数组是不是空的，如果是空的则
返回1，不是空的则返回0(注意),用.clear()可以将整个数组清除
vector可以用迭代器,即,begin()和.end() 
不能没创建内容就直接让arr[i]=一个值，因为本来没有这块空间 
在使用size()的时候返回的是一个unsigned的类型，一定是整数，所以如果.size()的0的话，减
去1之后就变成了二级制中最大的111111111111111111111111这个正数 






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
list类似于链表，跟vector不同的是他可以前后删减，删减的时间复杂度都是0(1)，查找的平
均时间复杂度是0(n)，在使用过程中多出来个.pop_front()和.push_front()用于解决前后方的
增删，有了.front()=数字和.back()=数字来改正前后方的值,也可以得到前后方的值，因为这里
是引用 

且不能用arr[x]来表示元素， 剩下的用法剩下都和vector一样









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
stack是栈的意思，不能在创建的时候就放好元素了，只能在放的时候一个一个放，先放进去的
放在栈底，后放进去的放在栈顶，取的时候先从栈顶取，.top()可以取到栈顶第一个元素，用
.push(元素)可以增加到栈顶一个元素，.pop()是去掉栈顶第一个元素，初次以外只有.empty()
和.size()可以使用
注意::stack不能遍历!!!!想要知道里边有什么只能一个一个拿出来，然后在一个个放回去，这
不叫遍历









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
queue是先进先出的数据结构，正好跟stack倒过来，先进来的先出去，可以使用.push(元素),
.pop(),.empty(),.size(),但是.front()和.back()跟list不同，list是给front和back赋值， 
但queue是能得到 front和back，跟stack一样都不能遍历
可操作的事件复杂度都是0(1) 








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
priority_queue为优先队列，写法为priority_queue<元素类型，vector<元素类型>,排列方式>
这个队列可以有很多分叉，呈现堆的形式，堆的顶点为最值，可以为最大值，也可以为最小值,
一般为最大值，然后往下的分支都是递减的，可以使用.push(元素)插入进去，用.pop()去除顶
部元素，这两个的时间复杂度都是0(logn)，.top(),.size(),.empty()的运用还是和以前的一样
，这些的事件复杂度还是0(1) 
如果想要堆的顶点为最小值，也叫小根堆，有上述的方法可以修改
第一种是运用仿函数的方法，先传入结构体，然后写operator(),operator后边的()用来重载之
后传入参数，用参数进行设置 
第二种方式是调用函数
第三种方式较为简便，直接在排列方式写上greater<int>，一般不写的时候默认为less<int>

deque为双端队列，使用的时候与list一样，唯一不同的是.front()和.back()仍然是跟queue一
样是返回头和尾的值，而不是像list能够修改







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
set<元素类型，排列方式>这种容器只能容纳单独一种元素，且只要输入进去就自动变成单调排序
而输入进去重复的元素之后，set会自动忽略重复的元素，排列方式默认为升序，如果想使用降序
可以像上边的priority_queue一样设置一个降序行数或仿函数或是使用greater<元素类型>
可使用的有.insert,.erase,.find,lower_bound,upper_bound,.size(),(此前事件复杂度是0(logn)))
其余都是0(1)，.empty(),.clear(),.rbegin(),.rend()，这里.rbegin()是指向最后一个迭代器，
下一位的方向是倒过来,结尾在.rend()这 
这里的erase想使用的时候如果要用范围的话，要用++arr.begin() 
与其他的不同的还有set不能使用arr[i]的形式 
multiset跟set的使用方法一样，唯一的不同是multiset可以存放重复的内容，但是如果只想删除
一个x，而使用了.erase(x)进行删除，将会把所有的x都删除了，想要只删除一个，就要使用
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
unordered_set是set的无序版本，在打印的时候不一定会是什么顺序，而且会像set一样自动忽略
重复元素，.count(x)用来查找该元素出现了几次












3月7号||||||||||||||||||||||||||||||||||||||||||||||||| 
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
 map<字符类型(这里用int举例),字符类型>={{},{}}用来存放数字和字符串，存放完之后想调用
 的时候可以用arr[x]来调用，但是这个x不是为序，而是里边存放的数字，调用完显示的只有代
 表的string.count(x)能查x在数组中有几个，但查完会发现如果有就只有一个，因为这个数字有
 了的时候再插入是插不进去的，如果想用map存入前边相同，后边不同的可以选择后边的字符类
 型是vector<>不同数字插进去之后也会正常排序，这个也可以使用.clear()来清除所有insert,
 erase,find,count,lower_bound,upper_bound在使用的时候时间复杂度都是0(logn)其他都是
 0(1)使用也和vector一样，只需要注意里边填写的x都是数字，而不是位序 
 multimap的使用和map是一样的，唯一的不同是multimap可以存入相同的x 
 而unorder_map是无序的，其进行操作使用哈希函数，平均时间复杂度都是0(1)，但是最坏的
 是0(n) 
 
 
 
 
 
 
 
 
3月8号||||||||||||||||||||||||||||||||||||||||||||||||||、、
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
斐波那契数列，时间复杂度是(2^n)，因为每次都会让return值乘2，空间复杂度是(n)，每次用
同一个值不会重新开辟一次空间 







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
吃糖问题，即自己设置糖的种类数和每种有多少个，然后每次吃的跟下次吃的不能是同一种
这里使用了priority_queue，不能使用遍历，且因为使用了vector，也只能使用push的方法加入
具体的实现是先把最多种类的糖分隔开，让剩下的糖至少能插入到这些缝隙中 
 





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
 ()完整问题，要让(存入到stack里，遇到)再把(取出，最后保证所有的()都是完整的 
  









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
配送问题，即一开始输入多少个快递，然后输入每个快递单号和城市，最后打印的时候按照城市
输入的顺序一次性打印这个城市所有的单号
这里使用了map<string,vector<string>>来存放一个城市的多个单号 








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
简单绘制扫雷基本盘 











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
 蓄水问题，即设定一个池子哪个口可以出水，每一分钟能增加上下左右四个格子出水，问设定
 一个时间能一共让多少个格子有水 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 3月10号||||||||||||||||||||||||||||||||||||||||||||||||| 
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
					cout<<"回："<< turn_string(years,4)+turn_string(months,2)+turn_string(days,2)<<endl;
					return 0;
				}
			}
		}
	}
	 return 0;
}
回文问题，关键点在于如2月要把前边的0加上，在使用string的时候不能后边直接等于'0'+数字
要创建完之后下边再使用，.substr(起始位置，多少个)可以截取string中的某段，用+-'0'可以
做到int和string的转换 









3月11日|||||||||||||||||||||||||||||||||||||||||||||||||||||||||| 
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
递归计算，如输入6，下一位不能大于上一位的一半，如输入6得到63，631，62，621，61，6 
 
  
  
  
  
  
  

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
将N进制改为10进制的方法，从头取得每一位，每加一位让前边的整体乘以N
如果是16进制，恰好又是8位，可直接设置一个unsigned int等于0x16进制的数字，因为16进制
中每个数字的4Bit,8比特是一个字节，8位数字是32bit，正好4个字节 









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
10进制改成N进制的方法，这里用二进制举例，关键在于N进制只有最后一位不是N的倍数，所以
将string转化为int类型之后，每次%N就能获得最后一位的数值，然后再给原来的数字除以N，就
能让最后一位前边的每一位往后移动位，以此类推再建好一个新的arr，注意最后要给arr倒序
一下，因为建造完的arr是从最后一位开始计入的 






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
冒泡排序的两种写法，即把数列以升序排序，可以移动最小，也可以移动最大，上边提供了两
种写法，但都要注意， 其中有一处要设置a-2或i+1，不然如果设置为a-1或i的话，他会继续去
糟践好数据
其中如果使用第一种for套for的写法，要注意i和j要相反方向，因为如果相同方向的话，i从
arr[0]开始弄完之后，arr[1] 的数据到了arr[0]处，如果在使用arr[1]，则用的数据是arr[2]
的数据
而用while来写这个的时候要注意先让b=a，然后让b去减，不然如果用a减，下边for中的a被干扰











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
插入排序，即给出一个数，然后插到数列里边，让其继续保持单调，在此进行了难度升级，先
弄好了数组，然后模拟使用插入排序的方法进行排序，关键在于进入的时候是从arr[1]进入的，
先保存arr[1]的数值，然后进行比较，这样就保证了前两位的顺序，后边使用arr[2]的时候，先
保存了arr[2]的数值，然后如果arr[2]<arr[1]的话，就直接把arr[2]改成arr[1]，再用一开始
保存的值给到空的里边，这里最关键的是虽然第二个循环是从i开始，但要反方向，并且保存的
值要从进入for(j)之前就保存完毕，随后才能使用这个值
j可以先创建，然后在最后跳出第二个循环的时候把值给arr[j]，也可以在第二步循环的时候
创建，只需要在arr[j]=arr[j-1]下边写arr[j-1]=b 即可 







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
快速排序，这里的时间复杂度是0(nlogn),此题的关键在于partition这个函数，先取得最边缘
的一个值，暂且定下这个值是未来的中间一个值，然后从头往后找比这个值大的，从后往头找
比这个值小的，然后进行互换，等到两天找的接应上了，就让这个值和接应上的值互换，因为
是先用用前边找后边，所以接头的值是大于等于这个值的可以互换，这样就把比这个小的全都
放在了左边，比这个大的全都放在了右边，注意返回值是这个第几个为序，下边才能继续分别
从这个为序的左边和右边进行调用
分治法















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
 归并法排序，是找到传入的两个最中间为序的，然后分成两半，每半先排序好，然后再和到一块
 要注意这里pb是从l开始的，时间复杂度也是0(logn) 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 3月12日||||||||||||||||||||||||||||||||||||||||||||||||||||| 
 
 
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
桶排序，即先设定好每一个元素，然后有这个元素就让这个元素对应的arr++,如有两个9，那
arr[9]就是2，最后打印的是时候打印每个桶里的就能做到桶排序，如果桶内不一样要先给桶内
排序 







3月13日||||||||||||||||||||||||||||||||||||||||| 
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
这是针对范围比较大时候的写法，可以先其用除法增强范围可表达性，然后再用vector<int>[]
这种二维数组的形式进行存放，[]里边的是桶，vector是桶里边的数组，在存后进行sort和erase
就能按顺序不重复地得到顺序 


















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
前缀和，这里的prefix[6]表示从第一个值一直加到arr[6]，arr[6]=prefix[6]-prefix[5]，
这里的p叫模数，有些题会强调要模上一个数，有些时候模完会是负的，但要整数的话可以先加一
个P,然后再模p
前缀和不能做到边查边修改 





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
平衡串问题，即输入L和Q,一段区间内有相等的L和Q就为一个平衡串 





3月15日||||||||||||||||||||||||||||||||||||||||||||||||||||||
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
差分，即brr[i]=arr[i]-arr[i-1]，如果从1开始是第一位，brr[l]+=x就表示从l到最后一位的
每一位都加x，因为在给第一个加上x之后，在后边如果想要表示arr[i]就要用arr[i-1]+brr[i]
这样就做到了每一位都加上x，如果想做到从l到r都加x，就要在brr[l]+=x之后写上brr[r+1]-=x
表示从r+1到最后都-了x，这样就能保证只有l到r加了x 
要注意这里创建数组要在int main()之前创建，否则可能会出现脏数据的情况 









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
离散化，把数组先排序，在再去除相同元素，这样就让剩余元素重新排了序 















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
战力大小问题，即把给定的元素分为两队，让其中一队最大战力和另一对最小战力差距最小
可以先排序，然后在相邻的两个差值最小的设定为所求，同时给出了思路，在解决其他类似
问题的时候也可以考虑先排序再解决问题










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
合并最小问题，即每次合并两个数字都要话相应数字的钱，使得最后总钱数最小，关键在于创建
一个priority_queue，每次取最小的两个，然后相加，这里是让最小的为Top,所以要用greater<int>






3月17日||||||||||||||||||||||||||||||||||||||||||||||||||||
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
把两个礼物装进一个盒子里的问题，给定一个重量，如果两个足够装进就装进两个，两个不足以
装进就装进一个，问最后需要多少个盒子，关键在于先排序，然后把最大和最小从两端往中间试 









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
分糖果问题，让最大的字符串最小， 注意s.size()%a?1:0，不管剩几个，最大的后边都能跟1个











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
			cout<<"非回文";
			return 0; 
		 } 
		 l++;
		 r--;
	}
	cout<<"回文";
	return 0;
 } 
 双指针的第一种形式，即从头和尾向中间靠拢
 
 
 
 
 
 
 
 
 
 
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
 双指针的第二种形式，一个在前边走，一个在后边走 
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
 二分，即每次从中间取值，砍去一半 
 
 
 
 
 
 
 
 
 
 
 
 
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
 跳跃搬石头问题，即给到一个长度的道路，设置石头的位置和最多能搬走几块石头才能使最短的
 每步跳跃距离最大
 再考虑while里边的问题时，考虑到了可能l和r相邻，(l+r)/2的结果就永远是l，那么l还是没有
 移动，所以while里边写了(1+1!=r)，在判断mid时,mid代表跳的距离 
 因为每次是从小到大排列，要找的也是最大值，所以当mid可以取到的时候l要等于mid,这样就能
 让l暂且为最大，若右边有更好的mid,l才会过去，否则只会移动r
 写check函数的时候arr[i]-arr[lst]若<mid，则代表没成功，只让i++，代表搬走了不能跳的石头
 否则，lst和i都++，代表跳到了这一块石头
 要注意最后对于lst的判断，若lst到重点的b的距离<mid，则不能跳，说明这个传入的mid是不可以的 
  
  
  
  
  

构造：
1.求(1/x)+(1/y)+(1/z)=1/n,结论是其中一组解为x=2n,y=3n,z=6n 
也可运用1/n=(1/(n+1))+1/(n(n+1))
2.给出等差数列的一部分，求得使其成立的最短等差数列，解决方式是求得给出的数的相邻两个
数差的最大公约数
3.异或代表二进制位不同的为1，相同的为0
4.s>0，没有任何一位有0，不能被任何一位整除，其中的一个解为个位为3,其余位为2，若2有
3的倍数个，则把其中的一个2改成5
4.使(a@b)+(b@c)+(c@a)=n,@代表异或，若abc全为奇数或全为偶数则n为偶数，一个为奇数最后
会有两个奇数相加，n还是偶数，一个偶数也同样，所以n一定为基数，至于求得的方法，可以让
a=b=n>>1，c=0，因为自己@自己是0，a@0=a,最后是a+b，等于翻了二倍，最后就是n 







位运算
^是异或的意思，即二进制相同的一位为0，不相同的为1，a^a=0,a^0=a,若x^y=z，则z^y=x,z^x=y
因为x^y^y=x^y，这个是符合交换律的，随便更换位置
判断a是否为奇数，a&1,为1为奇数
获取a的每一位，a&1，然后在a>>
修改a中的某一位为1，x|(1<<i)
判断是否为幂次方，x&(x-1),为0则为幂次方
获取最低位置的1，lowbit=x&-x，即x=0101000,则lowbit(x)=0001000，取到最低位置的1，剩下补0
在说明了x是32位的二进制的数的时候，如果后边涉及到了>>的使用，要注意给x设定unsigned int
否则在符号位为1的时候>>会自动补1














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
给出一个数组，按照给出的范围将每位进行或运算 









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
 将一个区间的数统统异或，重点在于k到i的异或和等于prexor[k-1]^prexor[i] 
 
 
 
 
 
 
 
 
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
全排列问题,这里运用了回溯法，即DFS，常见的有排列型搜索树和子集型搜索树，排列型就是向下
分散遍历，搜索型就是每次只能选择0或1，然后再往下也如此
这里使用Brr数组进行记录，即这一条线使用了一次一个数，那就记录在brr之中，下边再遍历n个
的时候检测到记录过就跳过，使用之后的关键在于最后要把brr删除记录，好让下条线能重新使用 






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
皇后问题，即在一个n*n的表格内，每次只能放一个皇后，以此为心画米字形，米字型所包含的位
置不能再放其他的，问一共有多少种放法
在传入多少层之后下边就不用将每行都设置++，因为在传入的时候就是按照每层一个的传入，所以
所在的行不会再放入，在寻找的时候只有这行放下的才能进入下行，而当层数为n+1的时候，就代表
这种情况是可以的，换件在于每次进入下一次dfs的之后的消除操作，这个消除操作是在这种情况
下面的分支情况完成之后才进行的，在设置++的时候，不可以用=1代替，因为在消除一个皇后之后
如果直接设置为0就把其他皇后所覆盖的范围也消除了 







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
围圈问题，每个人只能崇拜一个人，求崇拜圈的最小值，关键在于给一开始给每步标号，如果这步
有标号则围成圈，其中要让标号大于最小的起始步很重要 









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
淹没问题，即一开始有海洋和岛，海洋周边四个格会淹没岛屿，问淹没完之后还有几个岛(原本是
一个岛的如果淹没完是两个则还按照一个计算) 









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
队列问题，即同一队列不能相互整除，至少要多少队列 






DFS使用的时候如果要进行优化，可用数组接收每一个返回值，然后在其他的返回处先判断这个数组里
是不是有这个值，若有就直接return 




stoi(string)能将string转化成int类型，仅仅能转化成Int
to_string(整形)能将int和longlong转化成string 








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

