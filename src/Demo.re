Js.log("Hello, BuckleScript and Reason!");

type tree = Leaf | Node(int, tree, tree);

let rec sum = (item) => {
  switch (item) {
  | Leaf => 0
  | Node(value, left, right) => value + sum(left) + sum(right);
  }
};

let myTree =
  Node(
    1,
    Node(2, Node(4, Leaf, Leaf), Node(6, Leaf, Leaf)),
    Node(3, Node(5, Leaf, Leaf), Node(7, Leaf, Leaf))
  );

Js.log(sum(myTree));

let helloWorld = () => {
    print_endline("Hello world!");
  };

let sayHello = "hello";

let convertAgeData = (ageJSON) => {
  print_endline(ageJSON);
}