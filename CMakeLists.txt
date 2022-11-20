cmake_minimum_required(VERSION 3.23)
project(CS003A)

set(CMAKE_CXX_STANDARD 14)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

add_executable(RPN Assignments/RPN/rpn_main.cpp Assignments/RPN/RPN.cpp Assignments/RPN/RPN.h)

#add_executable(sfmlApplication
#        sfmlApplication/Application.cpp
#        sfmlApplication/Application.h
#        sfmlApplication/EventHandleable.cpp
#        sfmlApplication/EventHandleable.h
#        sfmlApplication/Component.cpp
#        sfmlApplication/Component.h
#        sfmlApplication/Updatable.cpp
#        sfmlApplication/Updatable.h
#        sfmlApplication/Square.cpp
#        sfmlApplication/Square.h
#        sfmlApplication/Project.cpp
#        sfmlApplication/Project.h
#        sfmlApplication/app_main.cpp)
#
#target_link_libraries(sfmlApplication sfml-graphics)

add_executable(Stacks Assignments/Lists/Stacks/stackTester.cpp)

add_executable(pokerAnalysis
        Assignments/Poker_Analysis/analysis/Deck.cpp
        Assignments/Poker_Analysis/analysis/Deck.h
        Assignments/Poker_Analysis/analysis/Card.cpp
        Assignments/Poker_Analysis/analysis/Card.h
        Assignments/Poker_Analysis/analysis/CardHandScorer.cpp
        Assignments/Poker_Analysis/analysis/CardHandScorer.h
        Assignments/Poker_Analysis/analysis/PokerScore.cpp
        Assignments/Poker_Analysis/analysis/PokerScore.h
        Assignments/Poker_Analysis/enums/suits.h
        Assignments/Poker_Analysis/enums/ranks.h
        Assignments/Poker_Analysis/poker_Main.cpp
        Assignments/Poker_Analysis/analysis/CardHand.cpp
        Assignments/Poker_Analysis/analysis/CardHand.h
        Assignments/Poker_Analysis/enums/scores.h
        Assignments/Poker_Analysis/display/drawables/DrawableCard.cpp
        Assignments/Poker_Analysis/display/drawables/DrawableCard.h
        Assignments/Poker_Analysis/display/drawables/DrawablePokerHand.cpp
        Assignments/Poker_Analysis/display/drawables/DrawablePokerHand.h
        Assignments/Poker_Analysis/display/helpers/PokerHands.cpp
        Assignments/Poker_Analysis/display/helpers/PokerHands.h
        Assignments/Poker_Analysis/display/PokerAnalysisDisplay.cpp
        Assignments/Poker_Analysis/display/PokerAnalysisDisplay.h
        Assignments/Poker_Analysis/display/DisplayWindow.cpp
        Assignments/Poker_Analysis/display/DisplayWindow.h)
#
target_link_libraries(pokerAnalysis sfml-graphics)
#
#add_executable(playingCard
#        Assignments/playingCard/card_main.cpp
#        Assignments/playingCard/topHatGuy.cpp
#        Assignments/playingCard/topHatGuy.h
#        Assignments/playingCard/Card.cpp
#        Assignments/playingCard/Card.h
#        Assignments/playingCard/RankEnum.h
#        Assignments/playingCard/SuitEnum.h
#        Assignments/playingCard/tophatguy_main.cpp )
#
#target_link_libraries(playingCard sfml-graphics)


#add_executable(CH11_ProgrammingProject_1
#        Assignments/_Textbook_Problems/Chapter_11/ProgrammingProject_1/PP1_main.cpp
#        Assignments/_Textbook_Problems/Chapter_11/ProgrammingProject_1/VectorDouble.cpp
#        Assignments/_Textbook_Problems/Chapter_11/ProgrammingProject_1/VectorDouble.h)
#add_executable(CH11_ProgrammingProject_3
#        Assignments/_Textbook_Problems/Chapter_11/ProgrammingProject_3/PP3_main.cpp
#        Assignments/_Textbook_Problems/Chapter_11/ProgrammingProject_3/Complex.cpp
#        Assignments/_Textbook_Problems/Chapter_11/ProgrammingProject_3/Complex.h)
#add_executable(CH11_ProgrammingProject_5
#        Assignments/_Textbook_Problems/Chapter_11/ProgrammingProject_5/PP5_main.cpp
#        Assignments/_Textbook_Problems/Chapter_11/ProgrammingProject_5/StringVar.cpp
#        Assignments/_Textbook_Problems/Chapter_11/ProgrammingProject_5/StringVar.h)

#add_executable(CH11_PracticeProgram_1
#        Assignments/_Textbook_Problems/Chapter_11/PracticeProgram_1/PP1_main.cpp Assignments/_Textbook_Problems/Chapter_11/PracticeProgram_1/money.cpp Assignments/_Textbook_Problems/Chapter_11/PracticeProgram_1/money.h)
#add_executable(CH11_PracticeProgram_2
#        Assignments/_Textbook_Problems/Chapter_11/PracticeProgram_2/PP2_main.cpp Assignments/_Textbook_Problems/Chapter_11/PracticeProgram_2/pairs.cpp Assignments/_Textbook_Problems/Chapter_11/PracticeProgram_2/pairs.h)
#add_executable(CH11_PracticeProgram_3
#        Assignments/_Textbook_Problems/Chapter_11/PracticeProgram_3/PP3_main.cpp
#        Assignments/_Textbook_Problems/Chapter_11/PracticeProgram_3/degreeAngle.cpp
#        Assignments/_Textbook_Problems/Chapter_11/PracticeProgram_3/degreeAngle.h
#        Assignments/_Textbook_Problems/Chapter_11/PracticeProgram_3/test.cpp
#        Assignments/_Textbook_Problems/Chapter_11/PracticeProgram_3/test.h)

#add_executable(CH10_PracticeProgram_1
#        Assignments/_Textbook_Problems/Chapter_10/PracticeProgram_1/PP1_main.cpp
#        Assignments/_Textbook_Problems/Chapter_10/PracticeProgram_1/CDAccount.cpp
#        Assignments/_Textbook_Problems/Chapter_10/PracticeProgram_1/CDAccount.h )
#add_executable(CH10_PracticeProgram_2
#        Assignments/_Textbook_Problems/Chapter_10/PracticeProgram_2/PP2_main.cpp
#        Assignments/_Textbook_Problems/Chapter_10/PracticeProgram_2/CDAccount.cpp
#        Assignments/_Textbook_Problems/Chapter_10/PracticeProgram_2/CDAccount.h)
#
#add_executable(CH10_PracticeProgram_3
#        Assignments/_Textbook_Problems/Chapter_10/PracticeProgram_3/PP3_main.cpp
#        Assignments/_Textbook_Problems/Chapter_10/PracticeProgram_3/CounterType.cpp
#        Assignments/_Textbook_Problems/Chapter_10/PracticeProgram_3/CounterType.h)
#
#add_executable(CH10_ProgrammingProject_4
#        Assignments/_Textbook_Problems/Chapter_10/ProgrammingProject_4/CH10_PP4_main.cpp
#        Assignments/_Textbook_Problems/Chapter_10/ProgrammingProject_4/month.cpp
#        Assignments/_Textbook_Problems/Chapter_10/ProgrammingProject_4/month.h)
#
#add_executable(CH10_ProgrammingProject_10
#        Assignments/_Textbook_Problems/Chapter_10/ProgrammingProject_10/POSTNET.cpp
#        Assignments/_Textbook_Problems/Chapter_10/ProgrammingProject_10/POSTNET.h
#        Assignments/_Textbook_Problems/Chapter_10/ProgrammingProject_10/PP10_main.cpp)
#
#add_executable(CH10_ProgrammingProject_11
#        Assignments/_Textbook_Problems/Chapter_10/ProgrammingProject_11/PP11_main.cpp
#        Assignments/_Textbook_Problems/Chapter_10/ProgrammingProject_11/movie.cpp
#        Assignments/_Textbook_Problems/Chapter_10/ProgrammingProject_11/movie.h)


#add_executable(degreeAngle
#        degreeAngle/degreeAngle.cpp
#        degreeAngle/degreeAngle.h
#        degreeAngle/degreeAngle_main.cpp
#        degreeAngle/test.cpp
#        degreeAngle/test.h)
#
#add_executable(CH9_PracticeProgram_1
#        Assignments/_Textbook_Problems/Chapter_9/PracticeProgram_1/PracticeProgram_1.cpp)
#
#add_executable(CH9_PracticeProgram_2
#        Assignments/_Textbook_Problems/Chapter_9/PracticeProgram_2/PracticeProgram_2.cpp)
#
#add_executable(CH9_PracticeProblem_3
#        Assignments/_Textbook_Problems/Chapter_9/PracticeProblem_3/PracticeProgram_3.cpp)
#
#add_executable(CH9_ProgrammingProject_4
#        Assignments/_Textbook_Problems/Chapter_9/ProgrammingProject_4/PP4_functions.cpp
#        Assignments/_Textbook_Problems/Chapter_9/ProgrammingProject_4/PP4_functions.h
#        Assignments/_Textbook_Problems/Chapter_9/ProgrammingProject_4/PP4_main.cpp)
#
#add_executable(CH9_ProgrammingProject_5
#        Assignments/_Textbook_Problems/Chapter_9/ProgrammingProject_5/PP5_functions.cpp
#        Assignments/_Textbook_Problems/Chapter_9/ProgrammingProject_5/PP5_functions.h
#        Assignments/_Textbook_Problems/Chapter_9/ProgrammingProject_5/PP5_main.cpp)
#
#add_executable(CH9_ProgrammingProject_6
#        Assignments/_Textbook_Problems/Chapter_9/ProgrammingProject_6/PP6_functions.cpp
#        Assignments/_Textbook_Problems/Chapter_9/ProgrammingProject_6/PP6_functions.h
#        Assignments/_Textbook_Problems/Chapter_9/ProgrammingProject_6/PP6_main.cpp)
#
#add_executable(Bouncing_Ball Assignments/Bouncing_Ball/bb_functions.cpp
#        Assignments/Bouncing_Ball/bb_functions.h
#        Assignments/Bouncing_Ball/bb_main.cpp
#        Assignments/Bouncing_Ball/bouncingBall.cpp
#        Assignments/Bouncing_Ball/bouncingBall.h
#        Assignments/Bouncing_Ball/paddle.cpp
#        Assignments/Bouncing_Ball/paddle.h)
#
#
#add_executable(class_example class_example/car.cpp
#        class_example/car.h
#        class_example/carLot.cpp
#        class_example/carLot.h
#        class_example/class_main.cpp)
#
#add_executable(match_functions review/match/match_functions.cpp
#        review/match/match_functions.h
#        review/match/match_main.cpp)
#
#add_executable(reviewFunction review/reviewFunction.cpp
#        review/reviewFunction.h
#        review/reviewMain.cpp)
#
#add_executable(reviewPartialArray
#        review/reviewPartialArray.cpp)
#
#add_executable(sfml_template
#        sfml_template/sfml_template.cpp)
#
#add_executable(struct_example
#        struct_example/coordinates.h
#        struct_example/names.h
#        struct_example/struct_functions.cpp
#        struct_example/struct_functions.h
#        struct_example/struct_main.cpp)
#
#add_executable(bootlegVector template_example/bootlegVector.cpp
#        template_example/bootlegVector.h
#        template_example/bootlegVector_main.cpp)

#add_executable(Dynamic_2D_Array Dynamic_2D_Array.cpp)
#
#add_executable(Palindrome Palindrome.cpp)
#

#target_link_libraries(Bouncing_Ball sfml-graphics sfml-audio)
#target_link_libraries(sfml_template sfml-graphics sfml-audio)

