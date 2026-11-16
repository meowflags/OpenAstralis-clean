// sub_2765C40
// rva 0x02765c40  size 342  section .text  group text
// window base 0x182765c40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2765C40(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, char *a6)
{
  char *v6; // r14
  __int64 v7; // r15
  char *v8; // rax
  int v9; // ecx
  __int64 v10; // rdi
  __int64 v11; // rsi
  int v12; // r9d
  __int64 v13; // rdx
  __int64 v14; // rdx
  _DWORD *v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rcx
  char *v18; // r9
  __int64 v19; // r8
  __int64 result; // rax
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rsi
  char v24; // [rsp+0h] [rbp-38h] BYREF
  char *v25; // [rsp+8h] [rbp-30h]
  __int64 v26; // [rsp+10h] [rbp-28h]
  __int64 v27; // [rsp+18h] [rbp-20h]
  char *v28; // [rsp+20h] [rbp-18h]
  __int64 v29; // [rsp+28h] [rbp-10h]
  unsigned int v30; // [rsp+34h] [rbp-4h]

  v29 = a5;
  v28 = a6;
  v27 = a1;
  v26 = a2;
  if ( (unsigned __int64)&v24 <= *(_QWORD *)(v7 + 8) )
  {
    v30 = a3;
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
    return sub_2765DA0();
  }
  else
  {
    v30 = a3;
    v8 = (char *)sub_53F8360(a1, a2, a3: a5, a4, a5: a3);
    if ( v8 != v6 )
    {
      v13 = *(_DWORD *)v8 >> 3;
      if ( *(__int16 *)&v6[8 * v13 + 62] < 2 || *(_DWORD *)&v6[8 * *(unsigned int *)&v6[8 * v13 + 16] + 16] != 64537 )
        v8 = (char *)sub_276FC00(a1: v10, a2: v11, a3: (_DWORD)v8, a4: v9, a5: (int)v6 + 34084944, a6: v12, a7: v24);
    }
    v14 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v14 + 32) > *(_QWORD *)(v7 + 32) )
    {
      v25 = v8;
      v15 = (_DWORD *)sub_1EAA920(a1: v10, a2: v11, a3: 40540512);
      v8 = v25;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v14 + 32;
      *(_DWORD *)v14 = 40540512;
      *(_DWORD *)(v14 + 4) = 0;
      *(_QWORD *)(v14 + 8) = 0;
      *(_QWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 24) = 0;
      v15 = (_DWORD *)v14;
    }
    v16 = v26;
    v17 = v27;
    v18 = v28;
    v19 = v29;
    v15[4] = (unsigned __int64)(v26 - (_QWORD)v6) >> 3;
    v15[3] = (unsigned __int64)(v17 - (_QWORD)v6) >> 3;
    v15[2] = (unsigned __int64)(v18 - v6) >> 3;
    v15[1] = (unsigned __int64)(v19 - (_QWORD)v6) >> 3;
    result = sub_27646A0(a1: (unsigned __int64)v15, a2: v16, a3: (unsigned __int64)v8, a4: v17, a5: v18, a6: 101);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280(a1: v22, a2: v23, a3: v21);
  }
  return result;
}
