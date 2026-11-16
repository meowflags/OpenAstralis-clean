// sub_185029FA0
// rva 0x05029fa0  size 294  section .text  group text
// window base 0x185029fa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185029FA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(__int64, __int64, _DWORD *); // rax
  __int64 result; // rax
  __int64 v17; // [rsp+0h] [rbp-28h] BYREF
  __int64 v18; // [rsp+10h] [rbp-18h]
  __int64 v19; // [rsp+18h] [rbp-10h]
  _DWORD *v20; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v9 + 8) )
  {
    v20 = a5;
    v19 = a3;
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  if ( a5 != v8 )
  {
    v10 = *a5 >> 3;
    if ( SHIWORD(v8[2 * v10 + 15]) >= 3 )
      goto LABEL_7;
  }
  do
  {
    v20 = a5;
    v19 = a3;
    v11 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v11 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v11 = MEMORY[0x181EAA920](a1, a2, a3: 40177568);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v11 + 40;
      *(_DWORD *)v11 = 40177568;
      *(_DWORD *)(v11 + 4) = 0;
      *(_QWORD *)(v11 + 8) = 0;
      *(_QWORD *)(v11 + 16) = 0;
      *(_QWORD *)(v11 + 24) = 0;
      *(_QWORD *)(v11 + 32) = 0;
    }
    *(_DWORD *)(v11 + 20) = 46923644;
    *(_DWORD *)(v11 + 16) = v8[93585974];
    *(_DWORD *)(v11 + 12) = (unsigned __int64)(v11 - (_QWORD)v8) >> 3;
    v18 = v11;
    sub_18503B9A0(a1, a2, a3: v11, a4, a5: 0);
    v10 = MEMORY[0x182769900](a1: v13, a2: v14, a3: v18, a4: v12, a5: &a7);
LABEL_7:
    ;
  }
  while ( v8[2 * v8[2 * v10 + 4] + 5] != 70129 );
  v19 = a3;
  v15 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * (*a5 >> 3) + 110]);
  v20 = a5;
  result = v15(a1, a2, a3: a5);
  if ( *(int *)(v9 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
