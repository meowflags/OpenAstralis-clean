// sub_5029240
// rva 0x05029240  size 358  section .text  group text
// window base 0x185029240: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5029240(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 (__fastcall *v18)(__int64, __int64, _DWORD *); // rax
  __int64 result; // rax
  __int64 v20; // [rsp+0h] [rbp-28h] BYREF
  __int64 v21; // [rsp+8h] [rbp-20h]
  __int64 v22; // [rsp+10h] [rbp-18h]
  _DWORD *v23; // [rsp+18h] [rbp-10h]
  __int64 v24; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v9 + 8) )
  {
    v24 = a5;
    v22 = a3;
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v10 = *(unsigned int *)(v9 + 72);
  if ( (_DWORD)v10 == 0 )
    goto LABEL_10;
  v11 = (unsigned int)v8[2 * v10 + 18];
  if ( (_DWORD)v11 != 0 )
    v12 = &v8[2 * v11];
  else
    v12 = &v8[2 * v10];
  while ( 1 )
  {
    if ( v12 != v8 )
    {
      v13 = *v12 >> 3;
      if ( SHIWORD(v8[2 * v13 + 15]) >= 3 && v8[2 * v8[2 * v13 + 4] + 5] == 70129 )
        break;
    }
    v23 = v12;
    v24 = a5;
    v22 = a3;
    v14 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v14 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v14 = sub_1EAA920(a1, a2, a3: 40177568);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v14 + 40;
      *(_DWORD *)v14 = 40177568;
      *(_DWORD *)(v14 + 4) = 0;
      *(_QWORD *)(v14 + 8) = 0;
      *(_QWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 24) = 0;
      *(_QWORD *)(v14 + 32) = 0;
    }
    *(_DWORD *)(v14 + 20) = 46923644;
    *(_DWORD *)(v14 + 16) = v8[93585974];
    *(_DWORD *)(v14 + 12) = (unsigned __int64)(v14 - (_QWORD)v8) >> 3;
    v21 = v14;
    sub_503B9A0(a1, a2, a3: v14, a4: v12, a5: 0);
    sub_2769900(a1: v16, a2: v17, a3: v21, a4: v15, a5: &a7);
LABEL_10:
    v12 = v8;
  }
  v22 = a3;
  v18 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * (*v12 >> 3) + 108]);
  v23 = v12;
  v24 = a5;
  result = v18(a1, a2, a3: v12);
  if ( *(int *)(v9 + 16) <= 0 )
    return sub_277F280();
  return result;
}
