# fortest
this rep for test

# git사용시 참고
# 2017/10/18 생성

# git의 push는 보내는거 pull은 받는거
# clone은 최초 복제 

# 20180516 추가

# ==== 최초 설정 ====
# 키 생성
ssh-keygen

# ==== 복제 ====
# 복제 할 위치로 이동
git config --global user.name <git 사용자이름>
git config --global user.email <git 메일 주소>
git clone <git https 주소>

# ==== 당기고 누르기 ====
# 가져오기(당기기)
git pull

# 보내기(등록된 git 주소로 보냄)
git add .               # 파일을 인덱스에 올리는 것
git commit -m "여기에 커밋을 입력하세요."
git remote add origin <레포 주소>
git push origin <브런치 명>

# 브런치 확인
git branch

# 브런치 전환
git checkout -b <브런치명>

# 가지 병합
git merge <현재 브런치와 병합 할 브런치명>

# git 설정 값
git config -l

# git 상태확인
git status


