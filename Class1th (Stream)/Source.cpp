#include <iostream>

void Swap(int firstValue, int secondValue)
{
    int temp = firstValue;

    firstValue = secondValue;

    secondValue = temp;

}

int main()
{
#pragma region ��Ʈ��
    /*
    // �ð��� �帧�� ���� ���������� �߻��ϴ�
    // �������� �帧�Դϴ�.

     char alphabet = 'A';
     int data = 100;

     std::cout << "data������ �� : " << data << std::endl;
     std::cout << "alphabet������ �� : " << alphabet << std::endl;



     // ��Ʈ���� ��� �Էµ� �����ʹ� ��� ��ġ�� �����ϸ�,
     // "<<" ������(���Կ�����)�� ����Ͽ� �ڽ��� ������ ���� ��ȯ�Ͽ� ����մϴ�.

     int selectCount = 0;

     // ��Ʈ������ �Է¹��� �� ">>" �����ڸ� ����Ͽ� ���ۿ� ������ ����
     // NULL ���ڱ����� ���� ���� ������ ����մϴ�.

     std::cin >> selectCount;

     std::cout << "selectCount�� �� : " << selectCount;

     // ��Ʈ���� �ü���� ���� �����Ǹ�, ��Ʈ�� ��ü�� ���۶��
     // �ӽ� �޸� ������ �����մϴ�.
     */
#pragma endregion
#pragma region ���� �Ҵ�
     // int* ptr = new int;
     // 
     // // �ʱ�ȭ ���߱� ������ garbage ���� ����
     // std::cout << "ptr�� ����Ű�� �� : " << *ptr << std::endl;
     // 
     // *ptr = 999;
     // 
     // std::cout << "ptr�� ����Ű�� �� : " << *ptr << std::endl;
     // 
     // delete ptr;

     // int* list = new int[5];
     // 
     // for (int i = 0; i < 5; i++)
     // {
     //     list[i] = 10 + i;
     //     std::cout << "list[" << i << "]�� �� : " << list[i] << std::endl;
     // }
     // 
     // delete [] list;

     // �迭 ���� ����
     // delete list; -> ��ü �迭�� �����Ǵ� ���� �ƴ϶� ���� �ּҰ��� �ִ� �迭 ���� �����ȴ�.
     // ������ �����͵��� �����ȴ�.
#pragma endregion
#pragma region ������

    // int value = 100;
    // 
    // int & ref = value;
    // 
    // std::cout << "ref�� �� : " << ref << std::endl;
    // std::cout << "value�� �� : " << value << std::endl;
    // 
    // ref = 999;
    // 
    // std::cout << "ref�� �� : " << ref << std::endl;
    // std::cout << "value�� �� : " << value << std::endl;

    // int x = 10;
    // int y = 20;
    // 
    // Swap(x, y);
    // 
    // std::cout << "x�� �� : " << x << std::endl;
    // std::cout << "y�� �� : " << y << std::endl;

#pragma endregion
#pragma region ���� ��� for��

    int dataList[5] = { 1,2,3,4,5 };

    // �б��������� �����ϰ� ������ dataList ������ element�� ���� �� ����� �������ָ� �� ������ ���� �� �ִ�.
    // for (const int & element : dataList)
    // {
    // 
    //     std::cout << "element�� �� : " << element << std::endl;
    // }
    // �Ϲ� for���� �迭 �ε��� ������ �����ؼ� �� ������ ����������
    // ���� ��� for���� Ư���� ������ �����ؼ� ������ ���� ����.

#pragma endregion
    return 0;
}