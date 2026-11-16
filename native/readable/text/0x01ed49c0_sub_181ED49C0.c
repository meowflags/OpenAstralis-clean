// sub_1ED49C0
// rva 0x01ed49c0  size 496  section .text  group text
// window base 0x181ed49c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_1ED49C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  _DWORD *result; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbp
  char v14; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v15; // [rsp+10h] [rbp-18h]
  _DWORD *v16; // [rsp+18h] [rbp-10h]
  __int64 v17; // [rsp+20h] [rbp-8h]

  v17 = a3;
  v16 = (_DWORD *)a5;
  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v14);
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
    return (_DWORD *)sub_1ED4BC0();
  }
  if ( (_DWORD *)a5 == v6 )
    goto LABEL_3;
  if ( (unsigned int)sub_1E64EE0(a1, a2, a3: a5) == 0 )
  {
LABEL_13:
    a5 = (__int64)v16;
LABEL_3:
    if ( *(int *)(v7 + 16) <= 0 )
      sub_277F280(a1, a2, a3: v17, a4, a5);
    return v6;
  }
  if ( *v16 >> 3 == 5056622 )
  {
    result = (_DWORD *)sub_1E64E60(a1, a2, a3: v16);
  }
  else if ( v6 + 94165140 == v16 )
  {
    result = v6;
  }
  else
  {
    result = v16;
  }
  if ( result != v6 )
  {
    v9 = *result >> 3;
    if ( SHIWORD(v6[2 * v9 + 15]) < 2 || v6[2 * v6[2 * v9 + 4] + 4] != 27283 )
    {
      sub_276FC00(a1, a2, a3: result, a4, a5: v6 + 8522816);
      goto LABEL_13;
    }
  }
  if ( result == v6 )
  {
    v11 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v11 + 40) > *(_QWORD *)(v7 + 32) )
    {
      v11 = sub_1EAA920(a1, a2, a3: 36450760);
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v11 + 40;
      *(_DWORD *)v11 = 36450760;
      *(_DWORD *)(v11 + 4) = 0;
      *(_QWORD *)(v11 + 8) = 0;
      *(_QWORD *)(v11 + 16) = 0;
      *(_QWORD *)(v11 + 24) = 0;
      *(_QWORD *)(v11 + 32) = 0;
    }
    *(_DWORD *)(v11 + 20) = 46923644;
    *(_DWORD *)(v11 + 16) = v6[93585974];
    *(_DWORD *)(v11 + 12) = (unsigned __int64)(v11 - (_QWORD)v6) >> 3;
    v15 = (_DWORD *)v11;
    sub_503B9A0(a1, a2, a3: v11, a4: v11, a5: 0);
    v10 = v17;
    v12 = (unsigned __int64)v15;
    v15[2] = (unsigned __int64)(v17 - (_QWORD)v6) >> 3;
    if ( (*(_DWORD *)v12 & 2) != 0 )
    {
      v13 = (v12 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v12 & 0xFFFFFFFFFFF80000LL) + ((v12 - v13) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v12 & 0xFFFFFFFFFFF80000LL) + ((v12 - v13) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v12 + 12) = 0;
    result = (_DWORD *)v12;
  }
  else
  {
    v10 = v17;
  }
  if ( *(int *)(v7 + 16) <= 0 )
    return (_DWORD *)sub_277F280(a1, a2, a3: v10);
  return result;
}
