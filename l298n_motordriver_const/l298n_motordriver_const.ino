const int p1 = 7;
const int p2 = 6;
const int p3 = 5;
const int p4 = 4;

void setup(){
  pinMode (p1, OUTPUT);
  pinMode (p2, OUTPUT);
  pinMode (p3, OUTPUT);
  pinMode (p4, OUTPUT);
}

void loop(){
  digitalWrite (p1, HIGH);
  digitalWrite (p2, LOW);
  digitalWrite (p3, HIGH);
  digitalWrite (p4, LOW);
}
