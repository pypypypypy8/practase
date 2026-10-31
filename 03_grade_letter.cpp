// Задача: Оценка по баллам
// Практика code review (2 курс)
// На что смотреть: лестница if без else if; магические пороги; копипаста сообщений
// Файл: 03_grade_letter.cpp

#include <iostream>

constexpr int kMinScore = 0;
constexpr int kMaxScore = 100;
constexpr int kThresholdA = 90;
constexpr int kThresholdB = 80;
constexpr int kThresholdC = 70;
constexpr int kThresholdD = 60;

char gradeLetter(int score)
{
    if (score >= kThresholdA)
    {
        return 'A';
    }
    else if (score >= kThresholdB)
    {
        return 'B';
    }
    else if (score >= kThresholdC)
    {
        return 'C';
    }
    else if (score >= kThresholdD)
    {
        return 'D';
    }
    return 'F';
}

int main()
{
    int score = 0;
    std::cout << "Enter score (" << kMinScore << ".." << kMaxScore << "): ";

    if (!(std::cin >> score))
    {
        std::cerr << "Error: expected an integer\n";
        return 1;
    }

    if (score < kMinScore || score > kMaxScore)
    {
        std::cerr << "Error: score must be in range "
                  << kMinScore << ".." << kMaxScore << '\n';
        return 1;
    }

    std::cout << "Grade: " << gradeLetter(score) << '\n';
    return 0;
}