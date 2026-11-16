// sub_2782720
// rva 0x02782720  size 432  section .text  group text
// window base 0x182782720: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2782720(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // r9
  __int64 v11; // rbp
  BOOL v12; // r10d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r8
  char v18; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB83C0();
  }
  else if ( a5 != v6 )
  {
    result = *(_QWORD *)(a5 + 8);
    if ( result == 0 )
    {
      result = 0;
LABEL_24:
      if ( *(int *)(v7 + 16) <= 0 )
        return sub_277F280(a1, a2, a3, a4);
      return result;
    }
    a4 = *(unsigned int *)(result + 16);
    v9 = *(_QWORD *)result;
    if ( (_DWORD)a4 == 0 )
      goto LABEL_33;
    a1 = *(_QWORD *)(v6 + 376652720);
    v10 = *(_QWORD *)(v6 + 376654976);
    if ( *(_BYTE *)(result + 52) != 0 )
      a2 = a1 == *(_QWORD *)(result + 24);
    else
      a2 = v10 == *(_QWORD *)(result + 32);
    if ( (_DWORD)a2 != 0 )
    {
LABEL_8:
      while ( v9 != 0 )
      {
        a4 = *(unsigned int *)(v9 + 16);
        v11 = *(_QWORD *)v9;
        a2 = v6 + 8 * a4;
        if ( (_DWORD)a4 == 0 )
          goto LABEL_35;
        if ( *(_BYTE *)(v9 + 52) != 0 )
          v12 = a1 == *(_QWORD *)(v9 + 24);
        else
          v12 = v10 == *(_QWORD *)(v9 + 32);
        if ( v12 )
        {
          if ( *(int *)(v7 + 16) <= 0 )
          {
            sub_277F280(a1, a2, a3, a4);
            result = v9;
            v9 = v11;
          }
          else
          {
            result = v9;
            v9 = *(_QWORD *)v9;
          }
        }
        else
        {
          a4 = *(unsigned int *)(v6 + 8 * a4 + 4);
          if ( (_DWORD)a4 == 0 )
            goto LABEL_36;
          if ( result != 0 )
          {
            *(_QWORD *)result = v11;
          }
          else
          {
            *(_QWORD *)(a5 + 8) = v11;
            *(_QWORD *)v9 = 0;
          }
          *(_QWORD *)(v9 + 8) = 0;
          *(_BYTE *)(v9 + 20) = 1;
          if ( *(int *)(v7 + 16) <= 0 )
            result = sub_277F280(a1, a2, a3, a4);
          v9 = v11;
        }
      }
      goto LABEL_24;
    }
    a4 = *(unsigned int *)(v6 + 8 * a4 + 4);
    if ( (_DWORD)a4 != 0 )
    {
      *(_QWORD *)(a5 + 8) = v9;
      *(_QWORD *)result = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_BYTE *)(result + 20) = 1;
      result = 0;
      goto LABEL_8;
    }
LABEL_34:
    sub_276EFE0(a1, a2, a3, a4, a5, a6: v10, a7: v18);
LABEL_35:
    sub_276EFE0(a1, a2, a3, a4, a5, a6: v10, a7: v18);
LABEL_36:
    sub_276EFE0(a1, a2, a3, a4, a5, a6: v10, a7: v18);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_27828E0(a1: v15, a2: v16, a3: v13, a4: v14, a5: v17);
  }
  sub_276EFE0(a1, a2, a3, a4, a5, a6, a7: v18);
LABEL_33:
  sub_276EFE0(a1, a2, a3, a4, a5, a6, a7: v18);
  goto LABEL_34;
}
