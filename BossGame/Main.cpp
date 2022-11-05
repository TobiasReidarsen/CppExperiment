#include <iostream>
#include <iomanip>


// for getting console input
// just so I don't have to asign a variable and then write std::cin >> variable
auto AskForInput() {
	std::string x;
	std::cin >> x;
	return x;
}

int AskForInput(bool integer) {
	if (integer) {
		int x;
		std::cin >> x;
		return x;
	}
}

// for when you want to print the input with a new line.
void PrintLine(auto input) {
	std::cout << input << std::endl;
}
void PrintLine() {
	std::cout << std::endl;
}

// for when you want to pring the input without a new line
void Print(auto input) { 
	std::cout << input;
}


// for if you want to print the asked input with a new line
void PrintInp() { 
	PrintLine(AskForInput());
}

// for if you want to print the asked input without a new line
void PrintInpt(bool newLine) {
	if (newLine) {
		Print(AskForInput());
	}
}


void TimeStuff(std::string input, int a) {
	for (int i = 0; i < a; i++) {
		//    Print(AskForInput());
		PrintLine(input);
	}
}

void TestHowFast(int a) {
	std::cout << "Say you name: ";
	auto c = AskForInput();
	PrintLine(c);
	time_t start, end;

	time(&start);

	std::ios_base::sync_with_stdio(false);

	TimeStuff(c, a);

	time(&end);
	double time_taken = double(end - start);
	std::cout << "Time taken by the program is : " << std::fixed << std::setprecision(5) << time_taken;
	std::cout << " sec " << std::endl;
}

void RunExperiments() {
	PrintInp();
	TestHowFast(AskForInput(true));
	PrintLine("just put a string directly withing PrintLine()");
	Print("No new line");
	Print(" like this");
	PrintLine("hahah");
	PrintLine();
	PrintLine("NoInput in previous printLine");
}

void CalcCirc(auto _radius) {
	const double PI = 3.14159;
	double radius = _radius;
	double circumference = 2 * PI * radius;
	std::string centimeter = "cm";
	//std::string circString = circumference + centimeter;
	Print(circumference);
	PrintLine("cm");
}

int main() {
	PrintLine("Skriv 'exp' for ting som tester funksjonene jeg har laget");
	auto ask = AskForInput();
	if (ask == "exp") {
		RunExperiments();
	}
	PrintLine(2);
	PrintLine();
	CalcCirc(AskForInput(true));

	return 0;
}