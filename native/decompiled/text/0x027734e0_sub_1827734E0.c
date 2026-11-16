// sub_1827734E0
// rva 0x027734e0  size 224  section .text  group text
// window base 0x1827734e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1827734E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB83C0]();
    return sub_1827735C0();
  }
  else if ( (_DWORD)a1 != 0 )
  {
    if ( *(int *)(v7 + 16) <= 0 )
      sub_18277F280(a1, a2, a3);
    return 67;
  }
  else if ( a6 != 0 )
  {
    if ( a3 != 0 )
    {
      v9 = *(_QWORD *)(v6 + 376178840);
      while ( 1 )
      {
        if ( v9 == 0 )
        {
          v11 = 0;
          goto LABEL_21;
        }
        if ( v9 == a3 )
          break;
        if ( *(int *)(v7 + 16) <= 0 )
        {
          sub_18277F280(a1, a2, a3);
          v9 = v10;
        }
        else
        {
          v9 = *(_QWORD *)(v9 + 160);
        }
      }
      v11 = 1;
LABEL_21:
      if ( *(int *)(v7 + 16) <= 0 )
        v11 = sub_18277F280(a1, a2, a3);
      if ( v11 != 0 )
        JUMPOUT(0x304EBC589LL);
      return 74;
    }
    else
    {
      if ( *(int *)(v7 + 16) <= 0 )
        sub_18277F280(a1, a2, a3: 0);
      return 74;
    }
  }
  else
  {
    if ( *(int *)(v7 + 16) <= 0 )
      sub_18277F280(a1, a2, a3);
    return 105;
  }
}
