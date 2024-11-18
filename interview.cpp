#include <iostream>

int main() {

  int attempts = 3;
  int job = 0;
  int fail = 0;
  int ceo = 0;
  char yes;
  int answer1;
  int answer2;
  int answer3;
  int answer4;

  std::cout << "=================\n";
  std::cout << "I N T E R V I E W \n";
  std::cout << "=================\n\n";

  std::cout << "Dear Applicant,\nThank you for your recent application for position : * Team Member *.\n";
  std::cout << "We at Company Ltd are happy to invite you to undertake a formal interview to access your suitability to the role and potential alignment with Company Ltd's corporate values.\n\n";
  while (attempts > 0) {
    std::cout << "To accept this invitation, please type 'Y':\n\n";
    std::cin >> yes;
    std::cout << " \n";
    if (yes == 'Y') {

      break;

    } else if (yes == 'n' || yes == 'N') {

      std::cout << "Are you sure?\n\n";

    } else {

      std::cout << "Invalid Entry. You have " << attempts-1 << " remaining.\n\n";

      attempts--;
    }
  }

  if (attempts == 0) {

      std::cout << "You have failed the interview.\n\n";

      return 0;

  }

  std::cout << "Please select the answer that you feel would closest resemble your own:\n\n";
  std::cout << "Q1. What are your career goals? Where do you see yourself in five years?\n\n";
  std::cout << "   1) I see myself working as a specialist in a small team, working towards a position in management.\n";
  std::cout << "   2) I'm content to just work for my allotted hours and take a paycheque, I have no real plans for progression or an overall career in this field, whatever that is.\n";
  std::cout << "   3) In 5 years I want a 6+ figure salary, be an outspoken provocateur with a large audience on a social media platform and use my position to reek petty vengeance on my vast number of accumulated enemies.\n\n";
  std::cout << "Please select 1-3: \n\n";
  std::cout << "My answer: ";
  std::cin >> answer1;
  std::cout << "\n\n";

  if (answer1 == 1) {
  
    std::cout << "Interesting...\n\n";
    job++;

  } else if (answer1 == 2) {

    std::cout << "Right okay...\n\n";
    fail++;

  } else if (answer1 == 3) {

    std::cout << "Hmm alright...\n\n";
    ceo++;

  } else {

    std::cout << "...\n\n";
    fail++;

  }

  std::cout << "Okay, next question.\n";
  std::cout << "Again, please select the answer that you feel would closest resemble your own:\n\n";
  std::cout << "Q2: How do you prioritize your work? How do you handle stress?\n\n";
  std::cout << "   1) I'll likely just do the bare minimum I can get away with without getting fired and then go off sick for the longest period allowed whilst receiving full pay if I ever feel stressed or overwhelmed.\n";
  std::cout << "   2) I love lists! I am extremely organised. I have authored several bespoke excel sheets and macros to allow me to organise and prioritise my workload with 100% efficiency. I'm not familiar with the concept of 'stress', but my feeling is that, like most problems, it can likely be solved with a 'can-do' attitude! \n";
  std::cout << "   3) In every scenario, I prioritise myself and look after numero uno * me *. I am the center of the universe and my glass throne is built upon the millions of particles of sand that an empath snowflake like you would call 'humans'. And what do you do when glass breaks? You replace it. Glass always breaks. I handle stress by * breaking * glass. Normally by throwing it at sad struggling saplings that fail to grow in my enormous and void-like shadow.\n";
  std::cout << "Please select 1-3: \n\n";
  std::cout << "My answer: ";
  std::cin >> answer2;
  std::cout << "\n\n";

  if (answer2 == 1) {
  
    std::cout << "Hmm okay okay, cool...\n\n";
    fail++;

  } else if (answer2 == 2) {

    std::cout << "Very interesting...\n\n";
    job++;

  } else if (answer2 == 3) {

    std::cout << "I see I see...\n\n";
    ceo++;

  } else {

    std::cout << "...\n\n";
    fail++;

  }

  std::cout << "Okay, let's move on:\n\n";
  std::cout << "Q3. Describe yourself in three words.\n\n";
  std::cout << "   1) Relentless, venomous, irascible\n";
  std::cout << "   2) Autodidactic, agreeable, sychophantic\n";
  std::cout << "   3) Indifferent, acquiesent, impassive\n\n";
  std::cout << "Please select 1-3: \n\n";  // Fixed line here
  std::cout << "My answer: ";
  std::cin >> answer3;
  std::cout << "\n\n";

  if (answer3 == 1) {
  
    std::cout << "A ha okay...\n\n";
    ceo++;

  } else if (answer3 == 2) {

    std::cout << "Yes okay right...\n\n";
    job++;

  } else if (answer3 == 3) {

    std::cout << "Intriguing...\n\n";
    fail++;

  } else {

    std::cout << "...\n\n";
    fail++;

  } 
  
  std::cout << "Okay, final question...:\n\n";
  std::cout << "Q4. You awaken in a jungle. An unspecified distance away, but not in your immediate vicinity, you can hear the sounds of gunfire and the sound of explosive shells impacting the geography. You are wearing generic tactical military gear issued by an unknown nation. There is dry blood soaked into the palms of your hands. You have been separated from your company and are unfamiliar with the environment around you. Without warning, another soldier comes into your line of vision. What is your next move: \n\n";
  std::cout << "   1) Take cover and stay out of sight until I can evaluate whether or not the soldier is a threat. Once assessed, make a crude shelter and establish my position using the sun or the moon. Attempt to reconvene with my company using tracking skills.\n";
  std::cout << "   2) Say 'waaaaaassssssup' bruddah and go find a brewski and pour one out for my lost comrades.\n";
  std::cout << "   3) I would pretend to surrender, claim that I am unarmed, then regardless of whether the solider is a friend or foe, grab them and stab them mercilessly with any sharp object I can get my hands on. I would then snap the neck, decapitate and drink the blood and spinal fluid, laughing maniacally between the large gurgling swigs. I would then undress and smear the remaining blood and guts all over me. I would then recruit a child army from the nearest village, promising them wealth and prosperity as well as getting them addicted to whatever narcotics are potentially available (or lure them in maybe fruity vapes?). I would then send wave after wave of child soliders into combat for my own amusement and probably film some tiktok videos to post and profit from at a later date.\n\n";
  std::cout << "Please select 1-3: \n\n";
  std::cout << "My answer: ";
  std::cin >> answer4;
  std::cout << "\n\n";
  
  if (answer4 == 1) {
  
    std::cout << "I see, okay...\n\n";
    job++;

  } else if (answer4 == 2) {

    std::cout << "Interesting...\n\n";
    fail++;

  } else if (answer4 == 3) {

    std::cout << "Hmm yes okay cool...\n\n";
    ceo++;

  } else {

    std::cout << "...\n\n";
    fail++;

  } 

  std::cout << "Okay, so that's the end of the interview, thank you for your participation...\n\n";

  
  while (attempts > 0) {
    std::cout << "If you would like to see your result, please press 'Y':\n\n";
    std::cin >> yes;
    std::cout << " \n";
  
    if (yes == 'Y') {
  
      break;
  
    } else if (yes == 'n' || yes == 'N') {
  
      std::cout << "Are you sure?\n\n";
  
    } else {
  
      std::cout << "Invalid Entry. You have " << attempts-1 << " remaining.\n\n";
  
      attempts--;
    }
  }

  if (attempts == 0) {
  
    std::cout << "You have failed the interview.\n\n";
    return 0;
  }

  if (job > fail && job > ceo) {

    std::cout << " Congratulations - we would like to offer you the position of 'Team Member'.\n\n";

  } else if (fail >= job && fail >= ceo) {

     std::cout << " You haven't been successful on this occassion. We had a record amount of applications for this position. Please try again in the future.\n\n";

  } else if (ceo > job && ceo > fail) {

    std::cout << " Dear Applicant, you have demonstrated truly * psychopathic * tendencies. We would like to offer you the position of CEO of Company Ltd. Congratulations.\n\n";

  } else {

    std::cout << " You haven't been successful on this occassion. We had a record amount of applications for this position. Please try again in the future.\n\n";
  }
}
