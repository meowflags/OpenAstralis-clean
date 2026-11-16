// sub_2764560
// rva 0x02764560  size 301  section .text  group text
// window base 0x182764560: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2764560(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  _DWORD *v8; // rax
  int v9; // ecx
  __int64 v10; // rdi
  __int64 v11; // rsi
  int v12; // r9d
  __int64 v13; // rdx
  __int64 v14; // rdx
  _DWORD *v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rsi
  char v23; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v24; // [rsp+8h] [rbp-30h]
  __int64 v25; // [rsp+10h] [rbp-28h]
  __int64 v26; // [rsp+18h] [rbp-20h]
  __int64 v27; // [rsp+20h] [rbp-18h]
  __int64 v28; // [rsp+28h] [rbp-10h]
  unsigned int v29; // [rsp+34h] [rbp-4h]

  v28 = a6;
  v27 = a1;
  v26 = a2;
  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v7 + 8) )
  {
    v25 = a5;
    v29 = a3;
    sub_1EB84E0();
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
    return ((__int64 (*)(void))sub_27646A0)();
  }
  else
  {
    v25 = a5;
    v29 = a3;
    v8 = (_DWORD *)sub_53F8360(a1, a2, a3: a5, a4, a5: a3);
    if ( v8 != v6 )
    {
      v13 = *v8 >> 3;
      if ( SHIWORD(v6[2 * v13 + 15]) < 2 || v6[2 * v6[2 * v13 + 4] + 4] != 64537 )
        v8 = (_DWORD *)sub_276FC00(a1: v10, a2: v11, a3: (_DWORD)v8, a4: v9, a5: (int)v6 + 34084944, a6: v12, a7: v23);
    }
    v14 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v14 + 24) > *(_QWORD *)(v7 + 32) )
    {
      v24 = v8;
      v15 = (_DWORD *)sub_1EAA920(a1: v10, a2: v11, a3: 40540272);
      v8 = v24;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v14 + 24;
      *(_DWORD *)v14 = 40540272;
      *(_DWORD *)(v14 + 4) = 0;
      *(_QWORD *)(v14 + 8) = 0;
      *(_QWORD *)(v14 + 16) = 0;
      v15 = (_DWORD *)v14;
    }
    v16 = v26;
    v17 = v27;
    v18 = v28;
    v15[3] = (unsigned __int64)(v26 - (_QWORD)v6) >> 3;
    v15[2] = (unsigned __int64)(v17 - (_QWORD)v6) >> 3;
    v15[1] = (unsigned __int64)(v18 - (_QWORD)v6) >> 3;
    result = sub_27646A0(a1: v15, a2: v16, a3: v8, a4: v17, a5: v18, a6: 64);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280(a1: v21, a2: v22, a3: v20);
  }
  return result;
}
