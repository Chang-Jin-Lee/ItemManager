# ItemManager 프로젝트

이 프로젝트는 Item 객체를 관리하는 ItemManager 클래스를 구현한 과제입니다. 각 Item 객체에는 uid, name, grade 멤버 변수가 있습니다.

## 기능

1. **Item 클래스**:

   * uid, name, grade 등의 데이터 멤버를 가짐.
   * SetGrade, GetGrade, GradeUp, Show 메서드를 통해 아이템의 등급을 설정하고 출력합니다.
   * Show: 각 아이템의 uid, name, grade를 출력합니다.

2. **ItemManager 클래스**:

   * Item 객체를 관리합니다.
   * 구현된 기능:
     * Add(int uid, const std::string& name, char grade): 아이템 추가
     * Remove(int uid): 아이템 삭제
     * Find(int uid): 아이템 검색
     * Print(): 목록 출력

## 사용 예시

```cpp
int main()
{
    // ItemManager 객체 생성
    ItemManager manager;
    
    // 아이템 추가
    manager.Add(1, "item1", 'A');
    manager.Add(2, "item2", 'B');
    manager.Add(3, "item3", 'C');
    
    // 전체 목록 출력
    manager.Print();

    // 아이템 검색 및 출력
    Item* item = manager.Find(2);
    item->Show();  // item2의 정보 출력

    // 아이템 삭제
    manager.Remove(2);
    
    // 삭제 후 목록 출력
    manager.Print();
}
```