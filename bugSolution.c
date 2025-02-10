int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  if (arr + 5 < arr + sizeof(arr)/sizeof(arr[0])){
    *(arr+5) = 6; //Attempting to write beyond array bounds
  }
  return 0;
}