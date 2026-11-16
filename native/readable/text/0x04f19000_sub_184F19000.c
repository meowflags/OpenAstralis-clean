// sub_4F19000
// rva 0x04f19000  size 277  section .text  group text
// window base 0x184f19000: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F19000(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  BOOL v9; // eax
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v15; // [rsp+8h] [rbp-20h]
  __int64 v16; // [rsp+10h] [rbp-18h]
  unsigned int v17; // [rsp+1Ch] [rbp-Ch]
  _DWORD *v18; // [rsp+20h] [rbp-8h]

  v18 = a5;
  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v7 + 8) )
  {
    v16 = a3;
    sub_1EB84E0();
    goto LABEL_19;
  }
  if ( a5 == v6 )
  {
    v9 = false;
  }
  else
  {
    v8 = *a5 >> 3;
    v9 = SHIWORD(v6[2 * v8 + 15]) >= 3 && v6[2 * v6[2 * v8 + 4] + 5] == 27577;
  }
  v10 = *(unsigned int *)(a3 + 12);
  if ( !v9 )
  {
    v17 = *(_DWORD *)(a3 + 12);
    v16 = a3;
    v15 = &v6[2 * v10];
    if ( a5 == v6 )
      v12 = (__int64)(v6 + 88325320);
    else
      v12 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5 + *(_QWORD *)&v6[2 * (*a5 >> 3) + 26]))(
              a1,
              a2,
              a3: a5);
    v13 = v17;
    if ( v17 != 0 )
    {
      sub_4F34940(a1, a2, a3: v15, a4: v17, a5: v12);
      goto LABEL_8;
    }
LABEL_20:
    sub_2771080(a1, a2, a3: v16, a4: v13, a5: v18);
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
    return sub_4F19120();
  }
  if ( (_DWORD)v10 == 0 )
  {
LABEL_19:
    v16 = a3;
    sub_2771080();
    goto LABEL_20;
  }
  v16 = a3;
  sub_C8BC240(a1, a2, a3: &v6[2 * v10], a4: a5);
LABEL_8:
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280();
  return v16;
}
