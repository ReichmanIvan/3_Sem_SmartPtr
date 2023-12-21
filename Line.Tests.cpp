#include "CppUnitTest.h"
#include "../Line/Line.h"
#include "../Line/Point.h"
#include "../Line/HelpMath.h"
#include <iostream>
#include <memory>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LineTests
{
	TEST_CLASS(LineTests)
	{
	public:
		
		TEST_METHOD(ConstructorTest_ValidData_Success)
		{
			std::shared_ptr<Point> point_1 = std::make_shared<Point>(123.0, 21.0);
			std::shared_ptr<Point> point_2 = std::make_shared<Point>(57.0, 35.0);
			std::shared_ptr<Color> color = std::make_shared<Color>(12, 247, 102);
			Line line_1(point_1, point_2, color);

			Assert::IsNotNull(&line_1);
		}

		TEST_METHOD(GetPoint1Test_ValidData_Success)
		{
			std::shared_ptr<Point> point_1 = std::make_shared<Point>(123.0, 21.0);
			std::shared_ptr<Point> point_2 = std::make_shared<Point>(57.0, 35.0);
			std::shared_ptr<Color> color = std::make_shared<Color>(12, 247, 102);
			Line line_1(point_1, point_2, color);

			std::stringstream buffer;
			std::string expected = "Point(123, 21)";

			buffer << *line_1.get_point_1();

			Assert::AreEqual(expected, buffer.str());
		}

		TEST_METHOD(GetPoint2Test_ValidData_Success)
		{
			std::shared_ptr<Point> point_1 = std::make_shared<Point>(123.0, 21.0);
			std::shared_ptr<Point> point_2 = std::make_shared<Point>(57.0, 35.0);
			std::shared_ptr<Color> color = std::make_shared<Color>(12, 247, 102);
			Line line_1(point_1, point_2, color);

			std::stringstream buffer;
			std::string expected = "Point(57, 35)";

			buffer << *line_1.get_point_2();

			Assert::AreEqual(expected, buffer.str());
		}

		TEST_METHOD(GetColorTest_ValidData_Success)
		{
			std::shared_ptr<Point> point_1 = std::make_shared<Point>(123.0, 21.0);
			std::shared_ptr<Point> point_2 = std::make_shared<Point>(57.0, 35.0);
			std::shared_ptr<Color> color = std::make_shared<Color>(12, 247, 102);
			Line line_1(point_1, point_2, color);

			std::stringstream buffer;
			std::string expected = "color(12, 247,102)";

			buffer << *line_1.get_color();

			Assert::AreEqual(expected, buffer.str());
		}

		TEST_METHOD(OutputOperatorTest_ValidData_Success)
		{
			std::shared_ptr<Point> point_1 = std::make_shared<Point>(123.0, 21.0);
			std::shared_ptr<Point> point_2 = std::make_shared<Point>(57.0, 35.0);
			std::shared_ptr<Color> color = std::make_shared<Color>(12, 247, 102);
			Line line_1(point_1, point_2, color);
			std::string expected = "line(Point(123, 21), Point(57, 35), color(12, 247,102))";
			std::stringstream buffer;

			buffer << line_1;

			Assert::AreEqual(expected, buffer.str());
		}
	};
	TEST_CLASS(ColorTests)
	{
	public:

		TEST_METHOD(ConstructorTest_ValidData_Success)
		{
			Color color_1(10,20,30);

			Assert::IsNotNull(&color_1);
		}

		TEST_METHOD(GetRedColorTest_ValidData_Success)
		{
			Color color_1(10, 20, 30);
			std::stringstream buffer;
			std::string expected = "10";

			buffer << color_1.get_red();

			Assert::AreEqual(expected, buffer.str());
		}

		TEST_METHOD(GetGreenColorTest_ValidData_Success)
		{
			Color color_1(10, 20, 30);
			std::stringstream buffer;
			std::string expected = "20";

			buffer << color_1.get_green();

			Assert::AreEqual(expected, buffer.str());
		}

		TEST_METHOD(GetBlueColorTest_ValidData_Success)
		{
			Color color_1(10, 20, 30);
			std::stringstream buffer;
			std::string expected = "30";

			buffer << color_1.get_blue();

			Assert::AreEqual(expected, buffer.str());
		}

		TEST_METHOD(OutputOperatorTest_ValidData_Success)
		{
			Color color_1(10, 20, 30);
			std::string expected = "color(10, 20,30)";
			std::stringstream buffer;

			buffer << color_1;

			Assert::AreEqual(expected, buffer.str());
		}
	};

	TEST_CLASS(HelpMathTests)
	{
	public:

		TEST_METHOD(IsDoubleEqualTest_ValidData_Success)
		{
			is_double_equal(10.0, 10.0);

			Assert::IsFalse(is_double_equal == 0);
		}
	};

	TEST_CLASS(PointTests)
	{
	public:

		TEST_METHOD(ConstructorTest_ValidData_Success)
		{
			Point point_1(1.0,2.0);

			Assert::IsNotNull(&point_1);
		}

		TEST_METHOD(EqualOperatorTest_ValidData_Success)
		{
			Point point_1(1.0, 2.0);
			Point point_2(1.0, 2.0);

			Assert::IsTrue(point_1 == point_2);
		}

		TEST_METHOD(OutputOperatorTest_ValidData_Success)
		{
			Point point_1(1.0, 2.0);
			std::string expected = "Point(1, 2)";
			std::stringstream buffer;

			buffer << point_1;

			Assert::AreEqual(expected, buffer.str());
		}
	};
}
