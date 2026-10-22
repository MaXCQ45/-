#include<bits/stdc++.h>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<iostream>
#include<string>
using namespace std;
string playerName = "幸存者";
bool isMale = true;

int mzhg;
int zd;
int swhm;
int qxs;
int swx;
int sn;
int mp;
int tongguan;
int sw1;
int zd1;
int sn1;
int mz1;
int mp1;
int zbbj;
int ccg;
int mzzd;
int mz;
int tongguan1;
int sw;
int x;
int s;
int cdd;
int jg;
int qiang;
int gun;
int by;
int gjj[100];
int hjj[100];
int zjj[100];

void Slowsay(string a) {
	int l = a.size();
	for (int i = 0; i < l; i++) {
		cout << a[i];
		Sleep(2);
	}
	printf("\n");
}
int read() {
	char ch = _getch();
	while (ch > '9' || ch < '0') ch = _getch();
	return ch - 48;
}

void qp() {
	system("cls");
	Slowsay("当前你的状态是\n");
	printf("子弹 %d，食物 %d\n", zd, sw);
}

int esl() {
	system("cls");
	char ch;
	Slowsay("你因为食物短缺，饿死了。\n");
	ch = _getch();
	hjj[1] = 1;
	Slowsay("Bad End  1\n");
	ch = _getch();
	s++;
	return 0;
}

int mzd() {
	hjj[2] = 1;
	system("cls");
	char ch;
	Slowsay("你遭遇了丧尸，因为子弹不足被咬死了。\n");
	ch = _getch();
	Slowsay("Bad End   2\n");
	ch = _getch();
	s++;
	return 0;
}

int hd1() {
	system("cls");
	Slowsay("在某一天，你家门口响起了敲门声，你打开门，外面的发现让你欣喜若狂\n");
	Slowsay("政府的救援部队已经消灭了这个城市的丧尸，\n他们在这个城市的各个角落搜索着可能存在的幸存者.\n");
	Slowsay("Happy End-----苟到最后\n");
	if (hjj[3] == 1 && gjj[1] == 0) {
		Sleep(2000);
		Slowsay("获得线索-----速度飘忽不定的政府");
	}
	gjj[1] = 1;
	return 0;
}

int hd2() {
	system("cls");
	int sw;
	char ch;
	Slowsay("在与妹子相处的这些时间里，你与她相爱了\n");
	Slowsay("你们的生活是那样的幸福\n");
	Slowsay("直到有一天......\n");
	Slowsay("基地首领希望你去执行一个任务，你选择\n");
	Slowsay("1.独自一人前往\n");
	Slowsay("2.和妹子一起去\n");
	while (true) {
		int x;
		x = read();
		if (x < 1 || x > 2) {
			Slowsay("请重新输入\n");
			continue;
		}
		if (x == 1) {
			Slowsay("当你完成任务回来的时候，发现——\n");
			Slowsay("基地被丧尸攻破了\n");
			Slowsay("这个基地的所有人都被丧尸杀了，一个人都没跑出来\n");
			hjj[4] = 1;
			Slowsay("Bad End    4");
			s++;
		}
		if (x == 2) {
			Slowsay("当你和妹子完成任务回来时，\n");
			Slowsay("基地已经变成一片废墟了\n");
			Slowsay("你和妹子没有办法，只能到处流浪\n");
			Slowsay("不过，两个人总比一个人要好\n");
			gjj[2] = 1;
			Slowsay("Happy End------神仙眷侣");
		}
		break;
	}
	return 0;
}

int hd3() {
	system("cls");
	char ch;
	Slowsay("你就这样平静的生活在这个基地里\n");
	Slowsay("直到某一天，大量的丧尸进攻了这里\n");
	if (zd > 9) {
		Slowsay("每个人都在尽自己的努力去守卫基地\n");
		Slowsay("每个人都做到了自己能做到的\n");
		Slowsay("最后，奇迹出现了\n");
		Slowsay("大家成功守住了基地\n");
		Slowsay("而你，也因为在守卫过程中立下大功成为了这个基地的英雄\n");
		Slowsay("顺便说一句，到死了你也没女朋友\n");
		gjj[3] = 1;
		Slowsay("Happy End-----英雄不朽");
		return 0;
	}
	Slowsay("丧尸的数量实在太多了，\n");
	Slowsay("尽管基地的大家都在尽全力防守\n");
	Slowsay("可基地还是被攻破了\n");
	Slowsay("而你，也死在了这里\n");
	s++;
	hjj[5] = 1;
	Slowsay("Bad End     5");
}

int hd4() {
	system("cls");
	Slowsay("在于少年相处的这些时间里");
	Slowsay("你尽力地保护着他");
	Slowsay("而他也常常给你带来惊喜");
	Slowsay("慢慢的，你开始认清你自己");
	Slowsay("你是个gay");
	Slowsay("于是，你就和少年性福快乐的生活在了一起");
	Slowsay("Happy End-----认清自己");
	gjj[4] = 1;
}

int td() {
	system("cls");
	char ch;
	Slowsay("那箱饼干与你的枪一起发出了强光\n");
	Slowsay("紧接着，他们融为了一体\n");
	Slowsay("当光芒散去时，整个世界都发生了变化\n");
	Slowsay("所有的丧尸都变回了人类\n");
	Slowsay("True End-----一如既往");
	if (zjj[1] != 1) {
		Slowsay("获得线索-----奇特的枪与饼干");
	}
	zjj[1] = 1;
}

int td2() {
	system("cls");
	char ch;
	Slowsay("你的变异已经开始了");
	Slowsay("你开始疯狂的进食，直到把自己的胃撑破");
	Slowsay("然后，就眼前一黑失去意识");
	Slowsay("再次醒来时，你已经是一个丧尸了");
	Slowsay("奇怪的是，你还保留着自己的意识");
	Slowsay("你感觉到自己的力气变得更大，速度变得更快");
	Slowsay("或许变成丧尸也不错————你这样想着");
	Slowsay("True End-----保持本我");
	if (zjj[2] != 1) {
		Sleep(2000);
		Slowsay("获得线索-----延迟变异的少年");
	}
	zjj[2] = 1;
}

int bd8() {
	Slowsay("坐在椅子上的是一个15岁左右的少年");
	Slowsay("正在你因为他的年龄而惊讶时");
	Slowsay("少年却站了起来，看向了你身后的妹子");
	Slowsay("“差不多了吧”，妹子这样说道");
	Slowsay("“可以了”，这是少年的回答");
	Slowsay("然后，你就感到脖子一阵剧痛");
	Slowsay("在你失去意识前，眼中最后的场景是妹子咬着你的脖子");
	s++;
	Slowsay("Bad End     8");
	if (hjj[8] == 0) {
		Sleep(2000);
		Slowsay("获得线索-----早已变异的妹子");
	}
	hjj[8] = 1;
}

int td3() {
	system("cls");
	Slowsay("你和妹子冲出了丧尸的围杀，");
	Slowsay("可是当你们来到那个幸存者基地时");
	Slowsay("却发现那个基地有一些不对");
	Slowsay("所有人都死气沉沉的");
	Slowsay("你们直接走向了首领的房间");
	if (zjj[2] == 1 && zjj[3] == 1) {
		bd8();
		return 0;
	}
	Slowsay("坐在椅子上的是一个30岁左右的男性");
	Slowsay("他说，欢迎");
	Slowsay("基地的首领表示可以用子弹交换你手中的食物");
	Slowsay("请输入你需要的子弹数");
	Slowsay("0");
	Slowsay("基地首领希望你加入这个基地");
	Slowsay("你的选择是");
	Slowsay("1.留在这");
	Slowsay("2.离开");
	Slowsay("2");
	Slowsay("你决定");
	Slowsay("1.当天离开");
	Slowsay("2.再停留一天");
	Slowsay("1");
	Slowsay("就在你快要离开的时候，妹子抓住了你的手");
	Slowsay("“我喜欢你，别走”,她这样说");
	Slowsay("于是，你留了下来");
	Slowsay("你们的生活是那样的幸福");
	Slowsay("直到有一天......");
	Slowsay("基地首领希望你去执行一个任务，你选择");
	Slowsay("1.独自一人前往");
	Slowsay("2.和妹子一起去");
	Slowsay("2");
	Slowsay("在执行任务的过程中");
	Slowsay("妹子曾被丧尸咬到过一口");
	Slowsay("她以为你没有发现");
	Slowsay("而你却在远处看到了这一幕");
	Slowsay("奇怪的是，她却并没有变异");
	Slowsay("当你和妹子完成任务回来时，");
	Slowsay("基地已经变成一片废墟了");
	Slowsay("你和妹子没有办法，只能到处流浪");
	Slowsay("不过，两个人总比一个人要好");
	Slowsay("Happy End------神仙眷侣");
	Slowsay("???????????????????????????????????"); 
	Slowsay("True End------幻觉");
	if (zjj[3] == 0) {
		Sleep(2000);
		Slowsay("获得线索-----不变异的妹子");
	}
	zjj[3] = 1;
}

int td4() {
	system("cls");
	Slowsay("当丧尸危机爆发时，你正呆在家里\n");
	char ch = _getch();
	ch = _getch();
	for (int i = 1; i <= 50; i++) {
		Slowsay("你的家里是个较为安全的地方，你可以选择搜索你家的物资或是去邻居家看看\n");
		Sleep(250 - 5 * i);
		system("cls");
		Slowsay("********************************************************************\n");
		system("cls");
	}
	Slowsay("检测到不匹配！！！\a\a\a");
	Sleep(2000);
	ch = _getch();
	Slowsay("有什么不对劲");
	Slowsay("你这样想着");
	Slowsay("过去了好多天，\n你还是一个人都没有遇到，\n除了丧尸就是丧尸");
	Slowsay("这一切，就好像被废弃了一样");
	Slowsay("\n");
	Slowsay("True End------停服");
	zjj[4] = 1;
	if (zbbj == 0)
		Slowsay("进阶线索-----逐步逼近的真相"), zbbj = 1;
}

int td5() {
	system("cls");
	Slowsay("当少年死去后，整个世界好像变得不同了");
	Slowsay("所有的活人在一瞬间消失");
	Slowsay("所有的丧尸当场去世");
	Slowsay("你的眼前只剩下了黑暗");
	Slowsay("不知道过去了多久，你死了");
	Slowsay("Bad End......");
	system("cls");
	Slowsay("当少年死去后，整个世界好像变得不同了\n");
	Slowsay("所有的活人在一瞬间消失\n");
	Slowsay("所有的丧尸当场去世\n");
	Slowsay("你的眼前只剩下了黑暗\n");
	Slowsay("不知道过去了多久，你死了\n");
	Slowsay("不，还没有结束");
	Slowsay("虽然好像和往常死去之后的感觉一样");
	Slowsay("但是。。。。。。");
	Slowsay("True End-----姗姗来迟的死亡");
	s++;
	if (zjj[5] == 0)
		Slowsay("进阶线索-----死亡之后");
	zjj[5] = 1;
}

int tg3() {
	Slowsay("当你再次睁开眼时");
	Slowsay("你发现自己躺在一个营养仓内");
	Slowsay("你无比的确认这就是真实的世界");
	Slowsay("你打碎了玻璃，跑出了营养仓");
	Slowsay("脑中的一切开始明晰起来");
	Slowsay("你认为自己知道了一切的真相");
	Slowsay("去杀光人类吧！！！！");
	Slowsay("你这样想着");
	Slowsay("来到了外面这个被丧尸破坏得满目疮痍的世界");
	Slowsay("你熟练的发出嘶吼，呼唤着周围的丧尸");
	Slowsay("你指挥着他们，毁掉了一个又一个人类的基地");
	Slowsay("虽然，在一个你不知道的地方");
	Slowsay("一个个一样的营养仓中，装着一个个一样的你");
	Slowsay("---------------游戏进阶剧情通关-------------");
	tongguan1 = 1;
}

int tg2() {
	Slowsay("当你再次睁开眼时");
	Slowsay("你发现自己躺在一个营养仓内");
	Slowsay("你无比的确认这就是真实的世界");
	Slowsay("你打碎了玻璃，跑出了营养仓");
	Slowsay("脑中的一切开始明晰起来");
	Slowsay("你认为自己知道了一切的真相");
	Slowsay("去拯救世界吧！！！！");
	Slowsay("你这样想着");
	Slowsay("来到了外面这个被丧尸破坏得满目疮痍的世界");
	Slowsay("虽然，在一个你不知道的地方");
	Slowsay("一个一样的营养仓中，装着一个一样的你");
	Slowsay("---------------游戏进阶剧情通关-------------");
	tongguan1 = 1;
}

int td6() {
	Slowsay("一天以后，少年回来了");
	Slowsay("一起回来的还有妹子");
	Slowsay("少年的手中拿着你的铭牌");
	Slowsay("此时，你才发现你的铭牌不见了");
	Slowsay("“没想到是你”");
	Slowsay("“妹子神色复杂的看了你一眼”");
	Slowsay("“我们是一类人”");
	Slowsay("“现在，让我把你带出去吧”");
	if (qxs == 1) {
		tg2();
		return 0;
	} else {
		Slowsay("一股强烈的撕扯感出现到了你身上");
		Slowsay("此时的你并不能接受如此巨大的伤害");
		Slowsay("你死了");
		Slowsay("Bad End      14");
		if (hjj[14] == 0)
			Slowsay("进阶线索-----外面的世界");
		hjj[14] = 1;
		s++;
	}
}

int bd6() {
	system("cls");
	Slowsay("你感觉到自己正在变异，");
	Slowsay("意识开始逐渐模糊起来");
	Slowsay("你的肚子正无比渴望着人肉");
	Slowsay("接着，你眼前一黑，再也没有醒来");
	s++;
	hjj[6] = 1;
	Slowsay("Bad End      6");
}

int bd3() {
	system("cls");
	char ch;
	Slowsay("长久的等待终于让你失去了理智，你疯了。\n");
	if (mp == -1) {
		Slowsay("当政府的救援队打开你家的门时，你嘶吼着扑了上去");
		if (zd > 0)
			Slowsay("他们试图将你击毙，却被你提前一枪击倒");
		else {
			Slowsay("你被他们击毙了");
			Slowsay("Bad End       12");
			s++;
			hjj[12] = 1;
			return 0;
		}
		Slowsay("你如同一个熟练的猎手，狩猎着救援队");
		Slowsay("当他们全部死去后，你开始享用起你的大餐");
		Slowsay("Bad End           13");
		if (by == 0)
			Sleep(2000), Slowsay("进阶线索-----变异是什么时候的事呢"), by = 1;
		hjj[13] = 1;
		return 0;
	}
	Slowsay("Bad End   3\n");
	s++;
	if (hjj[3] == 0 && gjj[1] == 1) {
		Sleep(2000);
		Slowsay("获得线索-----速度飘忽不定的政府");
	}
	hjj[3] = 1;
}

int bd7() {
	s++;
	system("cls");
	Slowsay("因为食物不足，你被狗咬死了");
	Slowsay("Bad End      7");
	hjj[7] = 1;
}

int bd15() {
	Slowsay("你发现这笔迹有些不对");
	Slowsay("就好像是新写上去的一样");
	Slowsay("认字迹的话，好像还十分熟悉");
	Slowsay("正当你想的入迷的时候，你的脖子被咬住了");
	Slowsay("在死前，你隐约听到了少年的声音,“再来一次吧”");
	Slowsay("Bad End     15");
	if (hjj[15] == 0) {
		Sleep(2000);
		Slowsay("进阶线索-----真的，假的！");
	}
	hjj[15] = 1;
}

int bd16() {
	system("cls");
	Slowsay("你一枪打死了少年");
	Slowsay("基地首领以为你疯了，开枪杀了你");
	Slowsay("Bad End     16");
}

int bd17() {
	system("cls");
	Slowsay("你试图开枪打死少年");
	Slowsay("但是被少年发现了");
	Slowsay("你被他一口咬死");
	Slowsay("Bad End      17");
}

int tgg3() {
	system("cls");
	Slowsay("你杀掉了少年，并吃掉了他的尸体");
	Slowsay("世界开始崩塌");
	tg3();
}

int bd9() {
	s++;
	system("cls");
	Slowsay("你进入大厦才发现这里藏着许多丧尸");
	Slowsay("你一路且战且退来到了地下室");
	Slowsay("诡异的是，当你杀光了跟来的丧尸后，发现地下室里并没有丧尸");
	Slowsay("这里有的，只是一个穿着白大褂的尸体");
	Slowsay("在尸体的衣服口袋中，你找到了一个笔记本");
	Slowsay("****(无法辨认)1号****进展*****永生");
	Slowsay("今********，*号诞生了，他比其*****更*");
	Slowsay("有些不对,*****的发育有些太快了");
	Slowsay("2号的**被***出有强感染性");
	Slowsay("************************");
	Slowsay("实验***瓶颈，或许我们因该**活体样本");
	Slowsay("**,样本失去活性,但**在动");
	if (mp == -1) {
		bd15();
		return 0;
	}
	Slowsay("正当你看的入迷的时候，你的脖子被咬住了");
	Slowsay("在死前，你隐约听到了少年的声音,“再来一次吧”");
	Slowsay("Bad End     9");
	if (hjj[9] == 0) {
		Sleep(2000);
		Slowsay("发现线索-----实验体1号与2号");
	}
	hjj[9] = 1;
}

int tg() {
	system("cls");
	Slowsay("不知为何，当你走到这里时，感到世界在一瞬间发生了变化");
	Slowsay("你不知道这个变化发生在那里，你只知道，现在的世界十分违和");
	Slowsay("或许，这个世界不是真实的");
	Slowsay("当你的脑中出现了这个的时候，你眼前的世界，蹦塌了");
	Slowsay("于此同时，大量记忆冲进了你的脑海");
	Slowsay("不，它们只是回来了，这本身就是你的记忆");
	Slowsay("他们在一开始被一些虚假的记忆所替换");
	Slowsay("从记忆中，你得知你此时正在玩一个vr游戏");
	Slowsay("少年与妹子则是游戏的gm");
	Slowsay("这款游戏号称有着超强的代入感");
	Slowsay("你在发售当天就买来玩了");
	Slowsay("“这游戏真是了不起啊”,你这样想着，“再玩一次吧”");
	Slowsay("可真的是这样吗");
	Slowsay("躺在营养仓中的你自始至终都没有睁开眼");
	Slowsay("正如你从一开始就没有怀疑那些记忆的真实性.......");
	Slowsay("---------------游戏基础剧情通关-------------");

	tongguan = 1;
}

int zhxs() {
	system("cls");
	Slowsay("你好奇的看着眼前的一切");
	Slowsay("“看起来像某个垃圾游戏的界面”，你这样想着");
	Sleep(2000);
	Slowsay("获得线索-----“结局？”");
}

int cg() {
	system("cls");
	Slowsay("你感觉到违和感在不断加深");
	Slowsay("世界好像不再是真实的");
	Slowsay("你现在脑中只有一种想法");
	Slowsay("活下去");
}

int cg2() {
	system("cls");
	system("Color f0");
	Slowsay("违和感在此时已经聚集到了顶峰");
	Slowsay("你的脑中想清楚了一切");
	Slowsay("1.那么，下一步是  杀光他们");
	Slowsay("2.那么，下一步是  团结起来");
	x = read();
	if (x == 1)
		Slowsay("本结局需要打通全badend"), swx = 1;
	system("Color f0");
}

int bd10() {
	system("cls");
	Slowsay("你发现了另一个基地");
	Slowsay("弹尽粮绝的你选择加入了他们");
	Slowsay("之后的每一天都十分单调");
	Slowsay("外出寻找物资，然后天黑了回家睡觉");
	Slowsay("应该是这样吗？");
	Slowsay("也许吧");
	Slowsay("Bad End     10");
	hjj[10] = 1;
}

int hd5() {
	Slowsay("没关系的，一切都会过去的");
	Slowsay("你这样说的");
	Slowsay("他似乎感觉到了你的善意，一点一点向你靠近");
	Slowsay("你紧紧的抱住了他");
	Slowsay("我会保护好你的");
	Slowsay("Happy End-----跨越物种的gay");
}

int sswj() {
	//  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	system("cls");
	Slowsay("欢迎来到由马骁腾撰写的丧尸末日,请告诉你的名字!");
	cout << ">>";
	cin >> playerName;
	Slowsay("请选择你的性别");
	Slowsay("1,男性");
	Slowsay("2,女性");
	int g = read();
	isMale = (g == 1);
	system("cls");

	if (isMale) 
		Slowsay("你好," + playerName + "先生");
	else 
		Slowsay("你好," + playerName + "女士");
	Slowsay("这座城市已经沦陷,努力活下去吧!\n");
	_getch();
	
	int w = 0;
	mp = 0;
	if (tongguan == 1) {
		mp = 0;
		Slowsay("检测到你以通关，是否领取特殊物品\n");
		Slowsay("1.领取");
		Slowsay("2.不领取");
		while (true) {
			x = read();
			if (x == 1)
				mp = -1;
			if (x == 2) {
				td4();
				return 0;
			}
			break;
		}
	}
	char ch;
	if (cdd == 1) {
		Slowsay("是否读取存档\n");
		Slowsay("1.读取\n");
		Slowsay("2.不读取\n");
		x = read();
		if (x == 1) {
			sw = sw1;
			zd = zd1;
			sn = sn1;
			mz = mz1;
			mp = mp1;
			goto cddd1;
		}
	}

	system("cls");
	Slowsay("当丧尸危机爆发时，你正呆在家里\n");
	ch = _getch();
	Slowsay("你有10点物资可以分配到子弹和食物上\n");
	ch = _getch();
	int x, y;
	int dd;
	qiang = 0;
	gun = 0;
	zd = 0;
	sw = 0;
	sn = 0;
	mz = 0;
	mzzd = 0;
	sn = 0;
	mzhg = 0;
	dd = 1;
	Slowsay("请输入你的选择(此次输入需键入回车)\n");
	while (true) {
		scanf("%d%d", &x, &y);
		zd = x;
		sw = y;
		if (x + y != 10 || x < 0 || y < 0) {
			if (x == 1 && y == 2) {
				sw = 99999;
				zd = 99999;
				Slowsay("启用秘籍\n");
				break;
			}
			Slowsay("请重新输入\n");
			w++;
			if (w > 10) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
				Slowsay("行了行了，这只是第一个选择而已\n"),
				        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
				Slowsay("有必要这么皮吗\n"),
				        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
				Slowsay("自动分配食物3个子弹7个\n"),
				        ch = _getch();
				ch = _getch();
				sw = 3, zd = 7;
				break;
			}
		} else break;
	}
	Slowsay("你的家里是个较为安全的地方，你可以选择搜索你家的物资或是去邻居家看看\n");
	ch = _getch();
	Slowsay("1.留在家中\n");
	Slowsay("2.前往邻居家\n");
	while (true) {
		x = read();
		if (x != 1 && x != 2)
			Slowsay("请重新输入\n");
		else if (x == 1) {
			Slowsay("在二楼，你发现了一些食物食物+3\n");
			ch = _getch();
			Slowsay("在家里过了一夜，食物-1\n");
			sw = sw + 2;
			break;
		} else {
			Slowsay("在前往邻居家的路上，你遇到了丧尸\n");
			ch = _getch();
			if (zd < 1) {
				Slowsay("你朝他开了一枪，不过枪里没有子弹，你被他咬死了\n");
				ch = _getch();
				hjj[11] = 1;
				Slowsay("Bad End      11\n");
				s++;
				ch = _getch();
				Slowsay("另外在说一句，一个子弹都不带，还到处乱浪，你是真的作");
				return 0;
			} else {
				Slowsay("你用你手中的枪结束了他的生命，子弹-1\n");
				zd = zd - 1;
				dd = 2;
				ch = _getch();
				Slowsay("邻居家里不知为何并没有人，你在仔细搜索后发现了一个弹夹，里面有4发子弹\n");
				zd += 4;
				ch = _getch();
				Slowsay("在邻居家过了一夜后，食物-2\n");
				sw = sw - 2;
				if (sw < 0) {
					esl();
					return 0;
				}
			}
			break;
		}
	}
	ch = _getch();
	qp();
	Slowsay("你回想起这附近有一座商场，你决定\n");
	ch = _getch();
	Slowsay("1.前往商场\n");
	Slowsay("2.到处乱走\n");
	Slowsay("3.留在屋子里\n");
	while (true) {
		x = read();
		if (x != 1 && x != 2 && x != 3) {
			Slowsay("请重新输入\n");
			continue;
		}
		if (x == 3) {
			if (sw < 2) {
				esl();
				return 0;
			}
			Slowsay("无聊正在逐渐消磨你的意志，但你还是坚持了下来。食物-2\n");
			sw = sw - 2;
			ch = _getch();
			Slowsay("之后的每一天你都是这样，独自一人在家中等待救援\n");
			ch = _getch();
			Slowsay("在过了好久之后\n");
			if (sw < 6) {
				esl();
				return 0;
			}
			x = rand() % 2;
			if (x == 1 && mp == 0) {
				hd1();
				return 0;
			}
			if (x == 0) {
				bd3();
				return 0;
			}
		}
		if (x == 2) {
			if (zd < 2) {
				mzd();
				return 0;
			}
			Slowsay("在到处乱走的过程中，你遇到了来自纳克萨玛斯的丧尸,子弹-2\n");
			zd = zd - 2;
			break;
		}
		if (x == 1) {
			if (zd < 4) {
				mzd();
				return 0;
			}
			Slowsay("在前往商场的过程中，你遇到了丧尸,子弹-4\n");
			zd = zd - 4;
			dd = 4;
			ch = _getch();
			Slowsay("你在商场发现了食物与子弹,食物+3,子弹+2\n");
			sw = sw + 3;
			zd = zd + 2;
			break;
		}
	}
	Slowsay("你在回家的路上发现了一个女幸存者\n");
	ch = _getch();
	Slowsay("她试图向你讨要食物，你的选择是\n");
	Slowsay("1.不给\n");
	Slowsay("2.给她2份食物\n");
	Slowsay("3.给她2份子弹\n");
	Slowsay("4.给她一枪\n");
	while (true) {
		x = read();
		if (x < 1 || x > 4) {
			Slowsay("请重新输入。\n");
			continue;
		}
		if (x == 1) {
			Slowsay("妹子生气的走了。\n");
			ch = _getch();
		}
		if (x == 2) {
			if (sw < 2) {
				Slowsay("食物不足\n");
				continue;
			}
			sw = sw - 2;
			mzhg++;
			Slowsay("你的食物-2，妹子好感度+1\n");
			ch = _getch();
		}
		if (x == 3) {
			if (zd < 2) {
				Slowsay("子弹不足\n");
				continue;
			}
			mzzd = 1;
			Slowsay("你给了妹子两份子弹，妹子离开了\n"), zd = zd - 2;
			ch = _getch();
		}
		if (x == 4) {
			if (zd < 1) {
				Slowsay("子弹不足\n");
				continue;
			}
			zd = zd - 1;
			Slowsay("你一枪杀死了妹子，并从她的尸体上找到了4份食物\n");
			if (swx == 2) {
				Slowsay("你吃掉了妹子的尸体，子弹+10086\n");
				zd = 10086;
			}
			sw = sw + 4;
			mzhg = -1;
		}
		break;
	}
	Slowsay("又过了一夜，你的食物-2\n");
	ch = _getch();
	qp();
	sw = sw - 2;
	if (sw < 0) {
		esl();
		return 0;
	}
	if (mzhg > 0) {
		Slowsay("那个妹子又来找到了你，并邀请你加入他们的幸存者基地\n");
	} else Slowsay("你在附近发现了一个幸存者基地\n");
	Slowsay("在前往基地的途中，你遇到了丧尸\n");
	Slowsay("你且战且退，大量丧尸把你逼进了一家商店\n");
	Slowsay("门口的丧尸越来越多，你选择\n");
	Slowsay("1.杀出去（消耗较少子弹)\n");
	Slowsay("2.守在这（消耗大量子弹，但可以拿到稀有物品）\n");
	while (true) {
		x = read();
		if (x < 1 || x > 2) {
			Slowsay("请重新输入\n");
			continue;
		}
		if (x == 1) {
			int res = 0;
			if (mzhg > 0)
				res = 1;
			else res = 3;
			if (zd < res) {
				mzd();
				return 0;
			}
			zd = zd - res;
			printf("你消耗了一些子弹冲了出去，子弹-%d\n", res);
			if (mzzd == 1 && mp == -1) {
				Slowsay("妹子在丧尸的尸体上找到了许多物资，子弹+7，食物+3\n");
				zd = zd + 7;
				sw = sw + 3;
				mz = 1;
				break;
			}
			x = rand() % 5;
			if (res == 1 && x != 3)
				Slowsay("妹子为了帮你突围，被丧尸咬到，然后自杀了。\n"), mzhg = -1;
			if (x == 3 && res == 1) {
				td3();
				return 0;
			}
		} else if (x == 2) {
			if (zd < 5) {
				mzd();
				return 0;
			}
			zd = zd - 5;
			Slowsay("你守在这家商店里直到杀死了所有找来的丧尸,子弹-5\n");
			if (mzhg == 1) {
				Slowsay("妹子在商店中发现了一把无限子弹的枪，子弹+10086\n");
				zd = 10086;
				ch = _getch();
				Slowsay("但是妹子在翻找货架的时候被沾了丧尸血的货架划伤\n");
				Slowsay("妹子自杀了\n");
				mzhg = -1;
			}
		}
		break;
	}
	ch = _getch();
	qp();
	Slowsay("你来到了这个幸存者基地\n");
	Slowsay("这个基地的首领表示可以用子弹交换你手中的食物\n");
	printf("你还有%d份食物，%d份子弹\n", sw, zd);
	ch = _getch();
	Slowsay("请输入你需要的子弹数\n");
	while (true) {
		x = read();
		if (x < 0 || x > sw) {
			Slowsay("请重新输入\n");
			continue;
		}
		sw = sw - x;
		zd = zd + x;
		if (x >= 1) {
			Slowsay("首领很开心你能提供稀缺的食物，多给了你1份子弹\n");
			zd = zd + 2;
		}
		break;
	}
	ch = _getch();
	qp();
	Slowsay("又过了一天，食物-2");
	sw = sw - 2;
	if (sw < 0) {
		esl();
		return 0;
	}
	ch = _getch();
	system("cls");
	Slowsay("基地首领希望你加入这个基地\n");
	Sleep(500);
	Slowsay("你的选择是\n");
	Sleep(500);
	Slowsay("\n");
	Sleep(500);
	system("Color f0");
	Slowsay("1.留在这");
	Slowsay("2.离开");
	while (true) {
		x = read();
		if (x < 1 || x > 2) {
			Slowsay("请重新输入\n");
			continue;
		}
		system("Color f0");
		if (x == 1) {
			if (mzhg > -1) hd2();
			else hd3();
			return 0;
		}
		if (x == 2) {
			ch = _getch();
			Slowsay("你决定\n");
			Slowsay("1.当天离开\n");
			Slowsay("2.再停留一天\n");
			while (true) {
				x = read();
				if (x < 1 || x > 2) {
					Slowsay("请重新输入\n");
					continue;
				}
				if (x == 1) break;
				if (x == 2) {
					ch = _getch();
					qp();
					Slowsay("这个基地的首领表示可以用子弹交换你手中的食物\n");
					printf("你还有%d份食物，%d份子弹\n", sw, zd);
					ch = _getch();
					Slowsay("请输入你需要的子弹数\n");
					while (true) {
						x = read();
						if (x < 0 || x > sw) {
							Slowsay("请重新输入\n");
							continue;
						}
						sw = sw - x;
						zd = zd + x;
						if (x >= 3) {
							Slowsay("首领很开心你能提供稀缺的食物，多给了你3份子弹\n");
							zd = zd + 3;
						}
						break;
					}
					sw = sw - 2;
					if (sw < 0) {
						esl();
						return 0;
					}
					Slowsay("又过了一夜，食物-2\n");
				}
				break;
			}
			Slowsay("在你离开的时候，一个少年跑了过来。\n");
			Slowsay("他说，他想要和你一起走\n");
			Slowsay("1.带上他\n");
			Slowsay("2.不带他\n");
			while (true) {
				x = read();
				if (x < 1 || x > 2) {
					Slowsay("请重新输入\n");
					continue;
				}
				if (x == 2) {
					Slowsay("少年生气的离开了，当他走远了，你才发现\n");
					Slowsay("在刚刚的接触中，他偷走了你的枪和所有子弹\n");
					zd = -1;
				}
				if (x == 1) {
					Slowsay("你选择上少年一起走\n");
					Slowsay("少年将他身上带着的一份食物交给了你\n");
					sw = sw + 1;
					Slowsay("食物消耗+1，少年入队\n");
					sn = 1;
				}
				break;
			}
			if (sn == 1 && swx == 2) {
				Slowsay("1.杀了少年\n");
				Slowsay("2.忍一会\n");
				x = read();
				if (x == 1) {
					bd16();
					return 0;
				}
			}
		}
		break;
	}
	sw = sw - 2 - sn;
	ch = _getch();
	qp();
	printf("你在路边的一座没人的房子里过了一夜,食物-%d\n", 2 + sn);
	if (sn == 1 && swx == 2) {
		Slowsay("1.杀了少年\n");
		Slowsay("2.忍一会\n");
		x = read();
		if (x == 1) {
			bd17();
			return 0;
		}
	}
	ch = _getch();
	if (sw < 0) {
		esl();
		return 0;
	}

	Slowsay("是否存档？\n");
	Slowsay("1.存档（记录当前进度，只能有一个存档）\n");
	Slowsay("2.不存\n");
	x = read();
	if (x == 1) {
		cdd = 1;
		sw1 = sw;
		zd1 = zd;
		mp1 = mp;
		mz1 = mz;
		sn1 = sn;
		Slowsay("存档成功");
	}
cddd1:
	if (sn == 1) {
		Slowsay("今天一早你就被少年叫醒了，\n");
		ch = _getch();
		Slowsay("他在床底下发现了一箱方便面，食物+6\n");
		sw = sw + 6;
		Slowsay("少年向你讨要武器，你决定\n");
		Slowsay("1.把枪给他\n");
		Slowsay("2.把从厨房拆下的水管给他\n");
		Slowsay("3.什么都不给他\n");
		while (true) {
			x = read();
			if (x < 1 || x > 3) {
				Slowsay("请重新输入\n");
				continue;
			}
			if (x == 1)
				qiang = 2;
			if (x == 2)
				gun = 2;
			break;
		}
	} else {
		Slowsay("你在冰箱里发现了几包巧克力\n");
		ch = _getch();
		Slowsay("希望他们还没过期吧,食物+3\n");
		sw = sw + 3;
	}
	ch = _getch();
	Slowsay("今天你们来到了一家大商场\n");
	Slowsay("你决定\n");
	Slowsay("1.独自探索1楼\n");
	Slowsay("2.独自探索2楼\n");
	if (sn == 1) {
		Sleep(500);
		Slowsay("3.和少年一起探索2楼");
	}
	while (true) {
		x = read();
		if (x < 1 || x > 3) {
			Slowsay("请重新输入\n");
			continue;
		}
		if (x == 1) {
			Slowsay("你在一楼发现了一些子弹，子弹+3\n");
			zd = zd + 3;
			Slowsay("奇怪的是，一只丧尸都没有看到\n");
			ch = _getch();
			if (sn > 0) {
				if (qiang == 2) {
					Slowsay("当你来到二楼时，发现了一地尸体\n");
					Slowsay("少年就倒在这尸体中间，他死前手还紧紧握着枪\n");
					Slowsay("你把枪拿了回来，并在少年的尸体下面发现了一箱压缩饼干\n");
					Slowsay("食物+10086\n");
					ch = _getch();
					sw = 10086;
					if (sw > 1000 && zd > 1000) {
						td();
						return 0;
					}
					sn = 0;
					qiang = 1;
				} else {
					Slowsay("当你来到二楼时，发现了少年的尸体\n");
					ch = _getch();
					sn = 0;
					Slowsay("你紧紧握着手中的枪，猛地一回头\n");
					Slowsay("四周大量的僵尸向你涌来\n");
					ch = _getch();
					zd = zd - 5;
					if (zd < 0) {
						mzd();
						return 0;
					}
					Slowsay("你杀光了这些丧尸，子弹-5\n");
					ch = _getch();
					Slowsay("你在二楼找到了食物，食物+2\n");
					sw += 2;
				}
			}
		}
		if (x == 2) {
			Slowsay("你来到了二楼，数之不尽的丧尸忽然从阴影中窜出\n");
			Slowsay("尽管你尽力抵抗，可丧尸的数量实在太多。\n");
			if (qiang == 2) {
				mzd();
				return 0;
			}
			ch = _getch();
			zd -= 5;
			if (zd < 0) {
				mzd();
				return 0;
			}
			Slowsay("你杀光了这些丧尸，子弹-5\n");
			ch = _getch();
			Slowsay("你在二楼找到了食物，食物+2\n");
			sw += 2;
			if (sn == 1) {
				Slowsay("少年在一楼找到了子弹，子弹+3\n");
				zd = zd + 3;
			}
		}
		if (x == 3 && sn == 1) {
			system("cls");
			Slowsay("你们来到了二楼\n");
			ch = _getch();
			system("Color f0");
			Slowsay("数之不尽的丧尸从阴影中窜出");
			Slowsay("尽管你们尽力抵抗，可丧尸的数量实在太多。");
			if (gun != 2 && qiang != 2) {
				Slowsay("没有武器的少年被当场咬死。");
				if (mp == -1 && mz == 0) {
					td5();
					return 0;
				}
				sn = 0;
			}
			Slowsay("其中一只丧尸趁你不注意冲到了你的旁边");
			if (gun == 2)
				Slowsay("就在你要被咬死的时候，少年扔出了手中的水管\n，救下了你");
			else if (qiang != 2) {
				zd = zd - 3;
				if (zd < 0) {
					mzd();
					return 0;
				}
				Slowsay("你赶忙回头几枪补掉了这只丧尸,子弹-3");
			}
			zd = zd - 3;
			if (qiang == 2 || zd < 0) {
				system("Color f0");
				mzd();
				return 0;
			}
			system("Color f0");
			Slowsay("经过了一番苦战，你们终于战胜了所有丧尸，子弹-3");
			ch = _getch();
		}
		break;
	}
	ch = _getch();
	qp();
	ch = _getch();
	printf("又过了一夜，食物-%d\n", sn + 2);
	sw = sw - 2 - sn;
	if (sw < 0) {
		esl();
		return 0;
	}
	qp();
	Slowsay("今天在出门的时候\n");
	Slowsay("你遇到了一条流浪狗\n");
	Slowsay("1.用枪打它\n");
	Slowsay("2.用食物引开它\n");
	while (true) {
		x = read();
		if (x < 1 || x > 2) {
			Slowsay("请重新输入\n");
			continue;
		}
		if (x == 1) {
			Slowsay("你一枪打死了这条狗，子弹-1\n");
			zd = zd - 1;
			ch = _getch();
			Slowsay("枪声引来了丧尸，子弹-2\n");
			zd = zd - 2;
			if (zd < 0) {
				mzd();
				return 0;
			}
			if (sn == 0) break;
			Slowsay("在消灭了丧尸之后，你忽然发现少年的脸色不太好\n");
			ch = _getch();
			Slowsay("原来，在昨天的商场中，少年早就被咬了一口");
			Slowsay("他一直瞒着你，不敢说出来");
			Slowsay("此时，他已经濒临变异了");
			Slowsay("你决定\n");
			Slowsay("1.杀了他(消耗大量子弹)\n");
			Slowsay("2.不杀他(消耗大量食物)\n");
			if (gjj[4] == 1 && zd < 4) {
				Slowsay("3.安抚他\n");
			}
			while (1) {
				x = read();
				if (x < 1 || x > 3) {
					Slowsay("请重新输入\n");
					continue;
				}
				if (x == 1) {
					if (swx == 2) {
						if (zd > 1000) tgg3();
						else mzd();
						return 0;
					}
					Slowsay("你试着向他开枪，不过却被他躲过了\n");
					Slowsay("你十分惊恐，疯狂地倾泻着手中的弹药\n");
					Slowsay("子弹-4\n");
					ch = _getch();
					zd = zd - 4;
					if (zd < 0) {
						mzd();
						return 0;
					}
					Slowsay("终于，你杀死了他\n");
					if (mp == -1 && mz == 0) {
						td5();
						return 0;
					}
					sn = 0;
				}
				if (x == 2) {
					Slowsay("你就站在旁边看着少年变异");
					Slowsay("奇怪的是，他变异后并没有");
					Slowsay("像其他的丧尸一样，向你扑过来");
					Slowsay("而是躲在墙角瑟瑟发抖");
					Slowsay("你慢慢的走过去");
					Slowsay("就在你走近的时候，少年突然暴起");
					Slowsay("狠狠地咬住了你的手臂");
					Slowsay("你赶忙用枪打死他，可是为时已晚");
					sn = 0;
					if (sw >= 6) {
						td2();
						return 0;
					} else {
						bd6();
						return 0;
					}
				}
				break;
			}
			if (x == 3 && gjj[4] == 1) {
				gjj[5] = 1;
				hd5();
				return 0;
			}
		}
		if (x == 2) {
			sw = sw - 2;
			if (sw < 0) {
				bd7();
				return 0;
			}
			Slowsay("你用两份食物引开了这条狗，食物-2\n");
		}
		break;
	}
	ch = _getch();
	ch = _getch();
	if (sn == 1 && sw >= 4 && gun == 2 && zd > 5) {
		hd4();
		return 0;
	}
	if (sn == 1) {
		Slowsay("又过了一天，食物-2\n");
		sw = sw - 2;
		if (sw < 0) {
			esl();
			return 0;
		}
		ch = _getch();
		Slowsay("今天早上，你发现少年不见了\n");
		Slowsay("你决定\n");
		Slowsay("1.去寻找他\n");
		Slowsay("2.不去找他\n");
		while (true) {
			x = read();
			if (x < 1 || x > 2) {
				Slowsay("请重新输入\n");
				continue;
			}
			if (x == 1) {
				Slowsay("你通过蛛丝马迹一路追踪，来到了一座大厦前\n");
				Slowsay("在路上，你遭遇了丧尸，子弹-2\n");
				zd = zd - 2;
				if (zd < 0) {
					mzd();
					return 0;
				}
				Slowsay("你决定\n");
				Slowsay("1.进入大厦\n");
				Slowsay("2.离开\n");
				while (true) {
					x = read();
					if (x < 1 || x > 2) {
						Slowsay("请重新输入\n");
						continue;
					}
					if (x == 2) {
						Slowsay("你在街边的商店中找到了食物,食物+2\n");
						sw = sw + 2;
					}
					if (x == 1) {
						if (zd <= 6) {
							mzd();
							return 0;
						} else {
							bd9();
							return 0;
						}
					}
					break;
				}
			}
			break;
		}
	}
	qp();
	ch = _getch();
	if (mz == 1 && sn == 1 && swx == 0) {
		td6();
		return 0;
	}
	Slowsay("又过了一天,食物-2");
	sw = sw - 2;
	if (sw < 0) {
		esl();
		return 0;
	}
	Sleep(500);
	Slowsay("遭遇丧尸，子弹-3");
	zd = zd - 3;
	if (zd < 0) {
		mzd();
		return 0;
	}
	Sleep(500);
	Slowsay("又过了一天,食物-2");
	sw = sw - 2;
	if (sw < 0) {
		esl();
		return 0;
	}
	Sleep(500);
	Slowsay("遭遇丧尸，子弹-2");
	zd = zd - 2;
	if (zd < 0) {
		mzd();
		return 0;
	}
	Sleep(500);
	if (ccg == 1) {
		tg();
		return 0;
	} else {
		bd10();
		return 0;
	}
}

int main() {
	CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
	system("Color 1F");
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	srand(time(0));
	while (true) {
		zd = 10000;

		int v = 0;
		char ch;
		mp = 0;
		Sleep(1000);
		ch = _getch();
		system("cls");
		Slowsay("1.进行游戏\n");
		Slowsay("2.查看成就\n");
		Slowsay("3.查看线索(获得全部线索后通关游戏)\n");
		Slowsay("4.获得一条随机的提示\n");
		Slowsay("5.'退出游戏'\n");
		x = read();
		if (x == 1) {
			sswj();
			if (s > 50 && swhm == 0) {
				swhm = 1;
				Slowsay("又死了啊");
				Slowsay("这已经是第几次了呢");
				Slowsay("一个柔和的声音从耳边传来");
				Slowsay("或许早该放弃了");
				Slowsay("\n");
				Slowsay("进阶线索-----死亡？死亡！");
			}
		}
		if (x == 2) {
			int v1;
			system("cls");
			if (tongguan1 == 1) {
				Slowsay("已通关进阶剧情");
				if (swx == 0)
					Slowsay("人类救星\n\n");
				else
					Slowsay("群尸之首\n\n");
			} else if (tongguan == 1) {
				Slowsay("已通关基础剧情\n\n");
			}
			int v = 0;
			Slowsay("Happy Bnd 达成\n");
			if (gjj[1] == 1)
				Slowsay("苟到最后\n"), v++;
			else
				Slowsay("未达成\n");
			if (gjj[2] == 1)
				Slowsay("神仙眷侣\n"), v++;
			else
				Slowsay("未达成\n");
			if (gjj[3] == 1)
				Slowsay("英雄不朽\n"), v++;
			else
				Slowsay("未达成\n");
			if (gjj[4] == 1)
				Slowsay("认清自己\n"), v++;
			else
				Slowsay("未达成\n");
			if (gjj[5] == 1)
				Slowsay("跨越物种的gay\n");
			else
				Slowsay("未达成\n");
			Slowsay("\n");
			Slowsay("Bad End 达成(共15个)\n");
			for (int i = 1; i <= 17; i++)
				if (hjj[i] == 1)
					printf("%d ", i), v++, v1++;
			Slowsay("\n");
			printf("当前死亡次数:%d", s);
			Slowsay("\n");
			Slowsay("True End 达成\n");
			if (zjj[1] == 1)
				Slowsay("一如既往\n"), v++;
			else
				Slowsay("未达成\n");
			if (zjj[2] == 1)
				Slowsay("保持本我\n"), v++;
			else
				Slowsay("未达成\n");
			if (zjj[3] == 1)
				Slowsay("幻觉\n"), v++;
			else
				Slowsay("未达成\n");
			if (zjj[4] == 1)
				Slowsay("停服\n"), v++;
			else
				Slowsay("未达成\n");
			if (zjj[5] == 1)
				Slowsay("珊珊来迟的死亡\n"), v++;
			else
				Slowsay("未达成\n");
			Slowsay("\n");
			if (v1 == 17 && swx == 1)
				swx = 2, cdd = 0;
			if (v > 15 && jg == 0) {
				cdd = 0;
				zhxs();
				jg = 1;
			}
			char ch = _getch();
		}
		if (x == 3) {
			system("cls");
			int v = 0;
			Slowsay("基础线索\n");
			if (zjj[1] == 1)
				Slowsay("    奇特的枪与饼干\n"), v++;
			else
				Slowsay("    ？？？？？\n");
			if (zjj[2] == 1)
				Slowsay("    延迟变异的少年\n"), v++;
			else
				Slowsay("    ？？？？？\n");
			if (zjj[3] == 1)
				Slowsay("    不变异的妹子\n"), v++;
			else
				Slowsay("    ？？？？？\n");
			if (hjj[3] == 1 && gjj[1] == 1)
				Slowsay("    速度飘忽不定的政府\n"), v++;
			else
				Slowsay("    ？？？？？\n");
			if (hjj[8] == 1)
				Slowsay("    早已变异的妹子\n"), v++;
			else
				Slowsay("    ？？？？？\n");
			if (hjj[9] == 1)
				Slowsay("    实验体1号与2号\n"), v++;
			else
				Slowsay("    ？？？？？\n");
			if (jg == 1)
				Slowsay("    “结局？”\n"), v++;
			else
				Slowsay("    ？？？？？\n\n");
			Slowsay("进阶线索\n");
			if (swhm == 1)
				Slowsay("    死亡？死亡！\n"), v++;
			else
				Slowsay("    ？？？？？\n");
			if (zbbj == 1)
				Slowsay("    逐步逼近的真相\n"), v++;
			else
				Slowsay("    ？？？？？\n");
			if (by == 1)
				Slowsay("    变异是什么时候的事呢\n");
			else
				Slowsay("    ？？？？？(本线索可以不发现)\n");
			if (zjj[5] == 1)
				Slowsay("    死亡之后\n"), v++;
			else
				Slowsay("    ？？？？？\n");
			if (hjj[14] == 1)
				Slowsay("    外面的世界\n"), v++;
			else
				Slowsay("    ？？？？？\n");
			if (hjj[15] == 1)
				Slowsay("    真的，假的！"), v++;
			else
				Slowsay("    ？？？？？\n");
			if (v > 6 && ccg == 0) {
				Sleep(2000);
				cdd = 0;
				cg();
				ccg = 1;
			}
			if (v >= 12 && qxs == 0) {
				Sleep(2000);
				qxs = 1;
				cg2();
				cdd = 0;
			}
			ch = _getch();
		}
		if (x == 4) {
			system("cls");
			x = rand() % 11;
			if (x == 0)
				Slowsay("加了好感后，妹子是有几率不死的哦");
			if (x == 1)
				Slowsay("如果想要和少年在一起的话，就一定要十分富有");
			if (x == 2)
				Slowsay("有一些事不是没有发生，只是你没看到");
			if (x == 3)
				Slowsay("如果和首领交换子弹的话，他会很开心");
			if (x == 4)
				Slowsay("妹子的身上带着4份食物呢");
			if (x == 5)
				Slowsay("因为某不愿透露姓名ww的要求，有一些结局要脸好才能触发");
			if (x == 6)
				Slowsay("大多数时候，你认为一个地方没有好结局只是因为你食物/子弹不够");
			if (x == 7)
				Slowsay("有一些结局是有前置条件才能触发的，耐心一点吧");
			if (x == 8)
				Slowsay("绝大多数的线索来自结局");
			if (x == 9)
				Slowsay("进阶线索需要你走以前没走过的路");
			if (x == 10)
				Slowsay("完成所有坏结局会进入尸王线");
			ch = _getch();
			continue;
		}
		if (x == 5) {
			system("cls");
			Slowsay("游戏退出中。。。。。。");
			if (tongguan1 != 1) {
				Slowsay("你死了");
				s++;
			} else {
				Slowsay("你离开了这个世界");
				return 0;
			}
		}
	}
}
