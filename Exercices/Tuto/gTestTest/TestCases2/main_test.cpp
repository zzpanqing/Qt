
#include <gtest/gtest.h>

#include <QtCore/QCoreApplication>

#include "addtest.h"

     class QtAppEnvironment: public testing::Environment

     {

     public:

            QtAppEnvironment(int argc, char ** argv)

            :m_argc(argc),

             m_argv(argv)

             {

             }

             virtual void SetUp()

             {

                   app = new QCoreApplication(m_argc,m_argv);

             }

             virtual void TearDown()

            {

                   app->exit();

                   delete app;

                   app = 0;

            }

           QCoreApplication *app;

           int m_argc;

           char **m_argv;

      };

      int main(int argc, char ** argv)

      {

            testing::AddGlobalTestEnvironment(new QtAppEnvironment(argc, argv));

            testing::InitGoogleTest(&argc,argv);

            return RUN_ALL_TESTS();

      }

     TEST(addTestCase, Handleadd1)

    {

           addTest test;

           EXPECT_EQ(2, test.add(1,1));     //test1

     }

     TEST(addTestCase, Handleadd2)

     {

          addTest test;

          EXPECT_EQ(10, test.add(2,9));  //test2， 故意把expect的值设为错的

      }



