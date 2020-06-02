int num(char c){
  switch(c)
  {
    case 'I': return 1;
    case 'V': return 5;
    case 'X': return 10;
    case 'L': return 50;
    case 'C': return 100;
    case 'D': return 500;
    case 'M': return 1000;
    default: return -1;
  }

  return 0;
}

int romanToInt(string s) {

  int sum = 0;

  for (int i=0; i< s.length() ; i++){
    char c = s[i];
    if(c == 'V' || c=='L' || c=='D' || c=='M'){
      sum+= num(c);
    }

    // for IV IX

    else if (c == 'I'){
      if (s[i+1]=='V'){
        sum += 4;
        i++;
      }
      else if( s[i+1] == 'X'){
        sum+=9;
        i++;
      }
      else{
        sum+=num(c);
      }
    }

    // for XL XC

    else if (c == 'X'){
      if (s[i+1]=='L'){
        sum += 40;
        i++;
      }
      else if( s[i+1] == 'C'){
        sum+=90;
        i++;
      }
      else{
        sum+=num(c);
      }
    }

    // for CD CM

    else if (c == 'C'){
      if (s[i+1]=='D'){
        sum += 400;
        i++;
      }
      else if( s[i+1] == 'M'){
        sum+=900;
        i++;
      }
      else{
        sum+=num(c);
      }
    }

  }

  cout<<sum;
  return sum;

}
