#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void display(char name[])
{
        printf("%s",name);
       int save;
            char save_name[20];
            printf("\nIf you want to save the above information in a diffent file,\npress 4 else press 5\n");
            scanf("%d",&save);
            if(save==4)
            {
                printf("Please enter a name for your file: ");
                scanf("%s",save_name);
                strcat(save_name,".txt");
                FILE *p2;
                p2=fopen(save_name,"w");
                fprintf(p2,"%s",name);
                printf("information stored\n");
            }
}
int  main()
{
    char * kid_workout,*kid_nutrition,*men_workout,*women_workout,*old_men_workout,*old_women_workout,*twenty_nutrition,*thirty_nutrition,*fourty_nutrition;
kid_workout=(char *)malloc(2695*(sizeof(char)));
kid_nutrition=(char *)malloc(1868*(sizeof(char)));
men_workout=(char *)malloc(2306*(sizeof(char)));
women_workout=(char *)malloc(2306*(sizeof(char)));
old_men_workout=(char *)malloc(1303*(sizeof(char)));
old_women_workout=(char *)malloc(1082*(sizeof(char)));
twenty_nutrition=(char *)malloc(1373*(sizeof(char)));
thirty_nutrition=(char *)malloc(1108*(sizeof(char)));
fourty_nutrition=(char *)malloc(1589*(sizeof(char)));
kid_workout="Running\nRunning is just about the simplest form of exercise there is, and it's perfect for kids.\nThey love it! Kids can run outdoors, but also inside: in a gym, down a hallway, or even around (and around, and around) a large table.\nRunning can also be combined with other moves into games, like relay races. More on that later!\nChange things up while running: Vary movement patterns by having kids switch from running to skipping, or try running in place with feet very close to the ground (this is called 'fast feet').\nKids can also run with high knees (lifting alternating knees toward the chest with each step) or 'butt kicks' (kicking alternating heels toward buttocks with each step).\nChanges of direction (side-to-side or reverse) work both muscles and brains, improving kids' coordination.\nJumping\nGet those feet up and off the ground for easy exercise that kids will want to do.\nJumps build muscle strength, cardiovascular fitness, and endurance.\nFun jumps for kids to try include\nJumping Jacks:\nstretch arms and legs out to the side like a starfish while jumping, return arms to sides and legs to center on landing\nTuck Jumps: bend knees and lift heels high while jumping\nHurdle Hops: jump side-to-side or front-to-back over pretend hurdle\nOne-Foot Hops: lift one knee and jump on standing leg; alternate (this is a great balance challenge too!)\nCriss-Cross Feet: jump straight up, then cross one foot in front of the other; on next jump, switch feet and continue\nSquats and Lunges\nYou do them, and kids can do them too: Bend those knees (but not too far) for squats and lunges! These simple exercises build leg strength to give kids a good foundation for all kinds of sports and fitness activities.\nTry forward, backward, and side lunges as well as classic squats.You can also incorporate jumps into a squat sequence by having kids hop after they stand up in between squats.\nSit-Ups and Push-Ups\nHit the floor for basic exercises that work the core: Sit-ups, push-ups, and planks. Kids can do traditional abdominal crunches, bicycle crunches, legs-up sit-ups, and more.\nThere are so many variations on the classic sit-up.\nKids can also learn to do basic push-ups and planks to strengthen their upper bodies and core muscles in the abs and back.\nAs with other exercises like squats and lunges, incorporate these into games and other exercise activities (see next step) to keep kids engaged and having fun.\nFinish With Stretching\nAfter exercise play with kids, follow up with some simple stretches to keep muscles strong and healthy.\nA stretching sequence and cool-down can also help transition kids into a more relaxed state post-workout (hey, we can dream!) and help prevent injuries.\n";
 kid_nutrition="Protein\nChoose seafood, lean meat and poultry, eggs, beans, peas, soy products, and unsalted nuts and seeds.\nFruits. Encourage your child to eat a variety of fresh, canned, frozen or dried fruits — rather than fruit juice.\nIf your child drinks juice, make sure it's 100 percent juice without added sugars and limit his or her servings.\nLook for canned fruit that says it's light or packed in its own juice, meaning it's low in added sugar.\nKeep in mind that one-quarter cup of dried fruit counts as one cup-equivalent of fruit. \nWhen consumed in excess, dried fruits can contribute extra calories.\n\nVegetables \nServe a variety of fresh, canned, frozen or dried vegetables.\nAim to provide a variety of vegetables, including dark green, red and orange, beans and peas, starchy and others, each week. \nWhen selecting canned or frozen vegetables, look for options lower in sodium.\n\nGrains\nChoose whole grains, such as whole-wheat bread, oatmeal, popcorn, quinoa, or brown or wild rice. \nLimit refined grains such as white bread, pasta and rice.\nDairy\nEncourage your child to eat and drink fat-free or low-fat dairy products, such as milk, yogurt, cheese or fortified soy beverages.\n\nAim to limit your child's calories from:\nAdded sugar. Limit added sugars. Naturally occurring sugars, such as those in fruit and milk, are not added sugars. \nExamples of added sugars include brown sugar, corn sweetener, corn syrup, honey and others.\nSaturated and trans fats. Limit saturated fats — fats that mainly come from animal sources of food, such as red meat, poultry and full-fat dairy products. \nLook for ways to replace saturated fats with vegetable and nut oils, which provide essential fatty acids and vitamin E. \nHealthier fats are also naturally present in olives, nuts, avocados and seafood. \nLimit trans fats by avoiding foods that contain partially hydrogenated oil.\n";
 men_workout="1. A focus on the big three\nIf you want to get a head start in your 20s, dedicate some significant time to mastering the big three compound lifts: the bench press, squat, and deadlift. \nFrom these three main lifts, you can build any number of workout routines to help you reach your goals. \nThese lifts are incredibly important, and should form the bedrock of any regimen you put together. \nBut getting them down is of paramount importance — and the earlier, the better. \nYou may have already done some of these lifts as a teenager, but now that your body has reached full maturity, it’s time to cement in your form, and start focusing on getting your numbers up.\n2. A simple PPL routine\nFor the uninitiated, PPL stands for stands for 'push, pull, legs.' \nEssentially, a PPL workout routine will cycle between these three things on any given day. \nAnd this basic format is an excellent way to put together a customized workout agenda.\nFor example, on day one, you will work on push exercises — meaning that you will be pushing the weight away from your body. \nThink overhead presses, bench presses, etc. \nOn day two, you’ll be pulling, or bringing weight toward your body. \nThat can include things like pulldowns and rows. Finally, day three focuses on the legs. Calf raises, leg curls, etc.\n3. Balance/flexibility/cardio\nSome trainers suggest going above and beyond simple lifting routines, and incorporating exercises that help you work on other aspects of your physical fitness, including balance and flexibility. \nThis is a great idea, because as we age, our balance and flexibility can waver — but by training our muscles and nerves to coordinate more efficiently, we can stave-off those processes. \nAlso, getting a good dose of cardio is an excellent idea.\n4. Starting Strength\nMark Ripptoe’s Starting Strength program has hordes of disciples. \nThe program, and corresponding texts, cover the basics of barbell training, and the body’s natural movements. \nIn a straightforward way, the program will get you on a progressive lifting schedule that should see you posting big gains, and looking better in no time. \nWe previously wrote about the program on our list of ideal weight lifting programs for beginners, and if you’re in your 20s and looking for a workout to start with, this one might be it.\n ";
 women_workout="Cardio Workouts\nAim to do four to six days of moderate-intensity aerobic activity for 45 to 60 minutes. \n'Longer workouts will help you build endurance and burn fat,' says Olson. \nSwitch up your routine—spend 10 to 15 minutes alternating between activities like the treadmill, bike, or jumping rope.\nNow's also a good time to train for a sprint triathlon, 10K race, or a half marathon.\nStrength Workouts\nStrength train one or two days a week, doing two or three sets of each move. \n'Always lift enough weight to struggle through your last three repetitions,' says Kaehler. \n'If you can easily do 15 reps, gradually increase the amount of weight you're lifting.'\nSide Lunge with Upright Row\nTargets shoulders, mid-back, glutes, thighs\nHold a dumbbell in each hand with palms facing thighs, toes pointing out. \nTake a big step out to the right side with right foot; bend right knee about 90 degrees and keep it aligned with toes; keep left leg straight. \nAt the same time, lift elbows until weights are at chest level; keep shoulders pressed down.\nLower arms and step back to start. ";
 old_men_workout="Dumbbell bench press\nThe reason I advise using dumbbells for your bench press is that it doesn’t cause as much stress to your shoulder joints as barbells,Dumbbells.\nalso engage more stabilizer muscles to keep the weight steady as you go through the motion of the exercise.\nBarbell Bent-over row\nBarbell bent over row is an overlooked back exercise that is often passed over for the lat pull-down machine.\nAlthough lat pull-down is a valid back exercise, the barbell bent over row is extremely good for your whole body due to the position you need to hold throughout the movement.\nDumbbell/Kettlebell Squat\nSquats are a staple exercise in any strength training program and work muscles throughout your entire body, including Quads, Hamstrings, Glutes, Hip Flexors, Lower back and Core.\nPush-ups\nThis is the most basic, but one of the most fundamental exercises for men over 40 in body weight training programs.\nIt’s easy, straightforward and gets results.\nPush-ups works throughout your upper body and includes mainly the muscles in your Chest, Shoulders and Triceps.\nPull-up\nYou can do pull-ups on anything that solidly hangs overhead, and I’m sure you’ve given them a go on a solid branch once or twice!\nPull-ups work multiple muscles throughout your upper body, including back, shoulders, and biceps.\n";
 old_women_workout="1. Don’t let your metabolism slow down – do BURPEES.\nHigh-intensity cardio stimulates our metabolism, which is more than necessary to motivate after a certain age. \nSo to prevent metabolism deceleration we should do this exercise once or twice per week. Start with one set of 3 reps and add another repetition each time. \nDon’t stress yourself too much.\n2. Keep it firm – do SQUATS.\nEvery woman wants to have a round backside \nbut even the luckiest ones who had it naturally without any training will start to lose it after the age of 40 thanks to the decrease of muscle mass. \nProperly done squats (with a straight back and knees right above the feet) can tone your whole body and prevent injury by improving your flexibility.\n3. To fight and prevent back pain – do a PLANK.\nDoing this exercise for 90 seconds 3 times a week is a great way to tone all the core muscles of our bodies. \nIt strengths our abs, the muscles of the chest, and the ones surrounding the spine. Our entire midsection tightens and supports our lower back.\n4. Protect yourself from arthritis – push DUMBBELLS.\nChronic joint pain can attack adults of all ages, so it’s never too soon to start preventing it and one of the best ways to do it is strength training. \nYou don’t have to spend hours lifting big weights. Doing deadlifts or overhead presses with 1-3 kg in each hand 2-3 times a week can do miracles for your body.\n5. Let your glutes rest – do a GLUTE BRIDGE.\nSitting all day in an office can deactivate our glutes which slows down the rate at which our body burns calories – the metabolism. \nThe hip extension in the glute bridge exercise makes the butt work and it can also open up any tightness from long days of sitting. Leave your arms along your sides, squeeze your butt muscles to lift your hips up, and squeeze them once more at the top, then slowly lower your hips back down.\n";
 twenty_nutrition="Key Nutrients You Need Now\nProtein: \nProtein helps keep you full and provides the building blocks so you can make and keep muscle. \n'Recent studies suggest that, at a minimum, we need 60 to 70 grams of protein a day,' says Leslie Bonci, M.P.H., R.D., director of sports medicine at the University of Pittsburgh Medical Center. \nGet your quota by eating skinless white-meat poultry, lean steak, fish, eggs, beans, tofu, and low-fat dairy.\n (Here's more on how much protein you really need per day.)\nPotassium: \nIn order for your muscles and heart to function properly, you need to consume a hefty dose of potassium. \nBut most women in their 20s get less than half the recommended amount, according to the USDA. \nMunching on two cups of fruit (like an apple, a banana, and plain yogurt with fresh strawberries) and two and a half cups of veggies daily (like a garden salad and a side of broccoli) will help you get all the potassium you need.\nOmega-3 fatty acids: \nThese polyunsaturated fatty acids may boost the level of serotonin, a feel-good chemical in your brain that research shows may be linked to depression when transmitted in low levels.\nSince women are twice as likely as men to be diagnosed with depression, start incorporating salmon and tuna into your diet, which are rich in omega-3s.\nYou can also get your fill from walnuts, ground flaxseed, and canola oil.\n";
 thirty_nutrition="Key Nutrients You Need Now\nFolate: \nIt's critical for supporting a healthy pregnancy, preventing neural-tube defects and helping your body make new cells. \nFolate may also help reduce the risk of heart disease. \nEat foods such as chickpeas, asparagus, spinach, broccoli, avocados, orange juice, and fortified whole grains to help meet your daily 400-microgram requirement.\nPhytonutrients: \n'These compounds contain antioxidants, which slow the aging process, ward off heart disease, and prevent changes in DNA, potentially preventing the development of cancer,' says Bonci. \nWhile phytonutrients come from plants, dark chocolate, red wine, and coffee are highest in them.\nIron: \nWhen you don't get enough iron, you might feel physically drained and mentally exhausted. \nResearchers at Penn State University found that young women who were deficient in the mineral took longer and performed worse on cognitive tasks than those who had normal levels of iron. \nGet your daily dose of 18 milligrams from foods such as clams, lean beef, fortified breakfast cereal, soybeans, pumpkin seeds, and skinless poultry.\n";
fourty_nutrition="Nutrition\nIf you haven’t gotten serious about your nutrition by the time you are 40, it’s time to start.\nChoose a variety of vegetables, including dark green, red and orange, beans and peas, starchy and non-starchy.\nEat a variety of fruits.\nInclude grains in your daily diet. Half of your grains should be whole grains.\nStick to fat-free or low-fat dairy. This includes milk, yogurt, cheese, or fortified soy products.\nHave protein at every meal. Healthy protein includes lean meat (chicken), seafood, eggs, beans and peas, nuts, seeds, and soy products.\nUse healthy oils, such as olive oil.\nAdditionally, women should consume:\nLess than 10 percent of your daily calories from added sugars (desserts and processed foods).\nLess than 10 percent of daily calories from saturated fats (red meat, high-fat dairy).\nLess than 2,300 milligrams (mg) per day of sodium.\nNor more than one drink per day of alcohol.\nCalcium, dietary fiber, potassium, vitamin A and vitamin C are important nutrients to include in your daily diet.\nMetabolism\nAfter 40, your hormone levels (estrogen) drop. This causes your insulin (hormone that helps your body use sugar) rise. \nYour thyroid levels go down. This combination makes you hungrier. You end up eating more and burning fewer calories. \nMuch of the weight gain occurs around your belly. Eat more foods with fiber (berries, whole grains, nuts) to fill you up and help you eat less. \nAim for 25 grams of fiber each day after the age of 40. Other ways to increase your metabolism include:\n\nEat breakfast.\nExercise.\nDrink cold water.\nSleep well.\nEat spicy food.\n";
 char name[30];
 int age,i=1,gender_flag=0,gender;
 float height,weight;
printf("   Welcome to Fit5\nPlease enter your name: ");
fgets(name,30,stdin);
printf("Hi %s",name);
printf("Enter your age: ");
scanf("%d",&age);
printf("Gender:\nMale - Press 1\nFemale - press 2\nTrans- press 3: ");
scanf("%d",&gender);
if(gender==1||gender==3)
gender_flag=1;
printf("Enter your height in cm: ");
scanf("%f",&height);
printf("Enter your weight in kg: ");
scanf("%f",&weight);
height/=100;
float BMI=weight/(height*height);
printf("\nYour BMI is: %.2f\n",BMI);
if(BMI<18.5)
printf("You are underweight!\n");
else if(BMI>=18.5&&BMI<=25)
printf("You are Fit!\n");
else if(BMI>25&&BMI<=30)
printf("You are overweight!\n");
else
printf("You are obese\n");
while(i)
{
    int  choice;
    printf("\nPress 1 for workout\nPress 2 for Nutrition\nPress 3 to exit: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            if(age<=13)
            {
                display(kid_workout);
            }
            else if(age>13&&age<=40)
           {

               if(gender_flag==1)
               {
                   display(men_workout);
               }
               else if(gender_flag==0)
               {
                   display(women_workout);
               }

           }
           else if(age>=40)
           {
               if(gender_flag==1)
               {
                   display(old_men_workout);
               }
               else if(gender_flag==0)
               {
                   display(old_women_workout);
               }
           }
            break;
        }
        case 2:
        {
           if(age<=13)
           {
               display(kid_nutrition);
           }
           else if(age>13&&age<=29)
           {
               display(twenty_nutrition);
           }
           else if(age>=30&&age<=45)
           {
               display(thirty_nutrition);
           }
           else
           {
               display(fourty_nutrition);
           }
            break;
        }
        case 3:
        i=0;
        printf("Thank You...");
        break;
        default: printf("Invalid input\n");
    }
}
}


