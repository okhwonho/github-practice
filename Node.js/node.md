설치 순서 
 1. node.js 설치
 - 확인은 Powershell 혹은 터미 널에서 node -v 로 확인
 2. npm init 
  - package.json 생성
 3. npm install express 
  - node_modules 폴더 내에 node.js 라이브러리 다운 받기

 4. npm install -g nodemon
  - 프로그램 수정될 때마다 자동으로 서버 다시시작 없이 적용되도록 nodemon 설치
  - -g 옵션은 모든 폴더에서 실행되도록 하는 옵션

 5. Powershell 보안 오류시
  - 관리자 권한으로 실행
  - executionpolicy 해서 'Restricted' 되어 있으면
  -      로 한 후 y(yes) 선택
