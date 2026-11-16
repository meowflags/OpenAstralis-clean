// sub_27735C0
// rva 0x027735c0  size 267  section .text  group text
// window base 0x1827735c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27735C0(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rcx
  char v18; // [rsp+0h] [rbp-48h] BYREF
  __int64 v19; // [rsp+10h] [rbp-38h]
  __int64 v20; // [rsp+18h] [rbp-30h]
  __int64 v21; // [rsp+20h] [rbp-28h]
  __int64 v22; // [rsp+28h] [rbp-20h]
  __int64 v23; // [rsp+30h] [rbp-18h]
  int v24; // [rsp+3Ch] [rbp-Ch]
  __int64 v25; // [rsp+40h] [rbp-8h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
  {
    v25 = a2;
    v22 = a1;
    v21 = a5;
    sub_1EB83C0();
    goto LABEL_13;
  }
  v23 = a3;
  if ( a6 == v6 )
  {
LABEL_13:
    sub_276EFE0(a1, a2, a3, a4, a5, a6, a7: v18);
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_27736E0();
  }
  v25 = a2;
  v22 = a1;
  v21 = a5;
  v20 = a6;
  result = sub_1DF46A0(a1, a2, a3: a6);
  v12 = v23;
  if ( *(_DWORD *)(v23 + 20) == 1 )
  {
    v19 = v6 + 373390488;
    v13 = sub_1ED7D20(a1: v10, a2: v11, a3: v6 + 373390488, a4: v9, a5: v20, a6: v25);
    v24 = v13;
    if ( v13 != -5 )
      *(_DWORD *)(v23 + 16) = v13;
    result = sub_2887A40(a1: v15, a2: v16, a3: v19, a4: v14, a5: v20);
    if ( (_DWORD)result != 0 )
    {
      result = sub_2887CC0(a1: v25, a2: *(unsigned int *)(v23 + 16), a3: v19, a4: v17, a5: v21, a6: v20);
      v12 = v23;
      *(_DWORD *)(v23 + 16) = -5;
    }
    else
    {
      v12 = v23;
    }
  }
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280(a1: v10, a2: v11, a3: v12);
  return result;
}
