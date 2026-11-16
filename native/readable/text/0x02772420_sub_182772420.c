// sub_2772420
// rva 0x02772420  size 390  section .text  group text
// window base 0x182772420: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2772420(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5, __int64 a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  _DWORD *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  _DWORD *v12; // rdx
  unsigned int (__fastcall *v13)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall *v14)(__int64, __int64, _DWORD *); // rbx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 i; // rax
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v26; // [rsp+8h] [rbp-30h]
  _DWORD *v27; // [rsp+10h] [rbp-28h]
  _DWORD *v28; // [rsp+18h] [rbp-20h]
  _DWORD *v29; // [rsp+20h] [rbp-18h]
  unsigned int (__fastcall *v30)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+28h] [rbp-10h]
  __int64 v31; // [rsp+30h] [rbp-8h]

  v29 = a3;
  v31 = a6;
  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v8 + 8) )
  {
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_27725C0();
  }
  v28 = &v7[2 * a3[1]];
  v27 = a5;
  v9 = (_DWORD *)sub_1ED7E00(a1: v7, a2: v28, a3: v7 + 93347622);
  v12 = v29;
  v13 = (unsigned int (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v6 + *(_QWORD *)&v7[2 * (*v29 >> 3) + 42]);
  v30 = v13;
  if ( v9 == v27 )
    goto LABEL_6;
  if ( v9 == v7 )
  {
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280(a1: v28, a2: v11, a3: v29);
    return 1;
  }
  else
  {
    v14 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v6 + *(_QWORD *)&v7[2 * (*v9 >> 3) + 32]);
    v26 = v9;
    if ( (_DWORD *)v14(a1: v10, a2: v11, a3: v9) != v7 )
    {
      v9 = (_DWORD *)sub_28C1C40(a1: v15, a2: v16, a3: v7 + 92054074);
LABEL_6:
      v26 = v9;
      result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, unsigned int (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD), _DWORD *, __int64))v30)(
                 a1: v10,
                 a2: v11,
                 a3: v12,
                 a4: v13,
                 a5: v27,
                 a6: v31);
      if ( *(int *)(v8 + 16) <= 0 )
        return sub_277F280(a1: v19, a2: v20, a3: v18);
      return result;
    }
    for ( i = (__int64)v26;
          ;
          i = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v6 + *(_QWORD *)&v7[2 * (*v28 >> 3) + 32]))(
                a1: v23,
                a2: v24,
                a3: v28) )
    {
      v28 = (_DWORD *)i;
      if ( (_DWORD *)i == v7 )
      {
        if ( *(int *)(v8 + 16) <= 0 )
          sub_277F280(a1: v15, a2: v16, a3: v29);
        return 1;
      }
      if ( v30(a1: v15, a2: v16, a3: v29, a4: v30, a5: i) == 0 )
        break;
    }
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280(a1: v23, a2: v24, a3: v22);
    return 0;
  }
}
