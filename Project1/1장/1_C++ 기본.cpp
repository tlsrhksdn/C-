//C++언어의 주요한 설계 목적

//C언어와의 호환성
//c언어의 문법 체계 계승
//소스 레벨 호환성-기존에 작성된 C 프로그램을 그대로 가져다 사용
//링크 레벨 호환성-C 목적 파일과 라이브러리를 C++ 프로그램에서 링크

//객체 지향 개념 도입
//캠슐화,상속,다형성
//소프트웨어의 재사용을 통해 생산성 향상
//복잡하고 큰 규모의 소프트웨어의 작성,관리,유지보수 용이

//엄격한 타입 체크
//실행 시간 오류의 가능성을 줄임
//디버깅 편리

//실행 시간의 효율성 저하 최소화
//실행 시간을 저하시키는 요소와 해결
//ex)작은 크기의 멤버 함수 잦은 호출 가능성->인라인 함수로 실행 시간 저하 해소

//C언어에 추가한 기능
//함수 중복
//매개 변수의 개수나 타입이 다른 동일한 이름의 함수를 선언

//디폴트 매개 변수
//매개 변수에 디폴트 값이 전달되도록 함수 선언

//참조와 참조 변수
//하나의 변수에 별명을 사용하는 참조 변수 도입

//참조에 의한 호출
//함수 호출 시 참조 전달

//new/delete 연산자
//동적 메모리 할당/해제를 위해 new와 delete 연산자 도입

//연산자 재정의
//기존 C++연산자에 새로운 연산 정의

//제네릭 함수와 클래스
//데이터 타입에 의존하지 않고 일반화시킨 함수나 클래스 작성 가능

//C++ 객체 지향 특성-캡슐화
//ㅋ데이터를 캡슐로 싸서 외부의 접근으로부터 보호

//클래스-객체를 만드는 틀

//다형성
//하나의 기능이 경우에 따라 다르게 보이거나 다르게 작동하는 현상
//연산자 중복,함수 중복,함수 재정의

//제네릭 함수와 제네릭 클래스
//제네릭 함수
//동일한 프로그램 코드에 다양한 데이터 타입을 적용할 수 있게 일반화시킨 함수
//제네릭 클래스
//동일한 프로그램 코드에 다양한 데이터 타입을 적용할 수 있게 일반화시킨 클래스
//template 키워드로 선언
//템플릿 함수 혹은 템플릿 클래스라고도 부름

//제네릭 프로그래밍
//제네릭 함수와 제네릭 클래스를 활용하여 프로그램을 작성하는 새로운 프로그래밍 패러다임


//컴파일
//C++ 소스 프로그램을 기계어를 가진 목적 파일로 변환

//링킹
//목적 파일끼리 합쳐 실행 파일을 만드는 과정
//목적 파일과 C++ 표준 라이브러리의 함수 연결, 실행 파일을 만드는 과정

//디버깅
//실행 중에 발생한 오류를 찾는 과정

//C++ 표준 라이브러리
//C++ 표준 라이브러리는 3개의 그룹으로 구분
//C 라이브러리
//기존 C 표준 라이브러리를 수용, C++에서 사용할 수 있게 한 함수들
//이름이 C로 시작하는 헤더 파일에 선언됨

//C++ 입출력 라이브러리
//콘솔 및 파일 입출력을 위한 라이브러리

//C++ STL 라이브러리
//제네릭 프로그래밍을 지원하기 위한 템플릿 라이브러리
