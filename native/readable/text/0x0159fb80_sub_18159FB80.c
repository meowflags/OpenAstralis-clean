// sub_159FB80
// rva 0x0159fb80  size 469  section .text  group text
// window base 0x18159fb80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_159FB80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v5 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_34;
  }
  v6 = *(unsigned int *)(v4 + 376613928);
  v7 = v4 + 52423880;
  if ( (_DWORD)v6 == 47076562 )
    v8 = v4 + 52423880;
  else
    v8 = v4 + 8 * v6;
  if ( v8 != v4 && *(_DWORD *)v8 >> 3 != 4260452 )
    goto LABEL_35;
  if ( v8 == v4 )
  {
LABEL_34:
    v8 = sub_2771080(a1, a2, a3: v7);
LABEL_35:
    sub_276FC00(a1, a2, a3: v8, a4, a5: v4 + 34083616);
LABEL_36:
    sub_2771080(a1, a2, a3: v7);
LABEL_37:
    v10 = sub_2771080(a1, a2, a3: v7);
LABEL_38:
    v16 = sub_276FC00(a1, a2, a3: v10, a4, a5: v4 + 34083616);
LABEL_39:
    sub_276FC00(a1, a2, a3: v16, a4, a5: v4 + 34083616);
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
    return sub_159FD60();
  }
  if ( *(_QWORD *)(v8 + 8) != 0 )
  {
    v9 = *(unsigned int *)(v4 + 376613928);
    if ( (_DWORD)v9 == 47076562 )
      v10 = v4 + 52423880;
    else
      v10 = v4 + 8 * v9;
    if ( v10 != v4 )
    {
      v7 = *(_DWORD *)v10 >> 3;
      if ( (_DWORD)v7 != 4260452 )
        goto LABEL_38;
    }
    if ( v10 != v4 )
    {
      v11 = *(_QWORD *)(v10 + 8);
      if ( v11 < 0 )
        v12 = -v11;
      else
        v12 = *(_QWORD *)(v10 + 8);
      v13 = 1000000000 * v11;
      if ( (v12 & 0xFFFFFFFF80000000LL) != 0 )
      {
        v7 = v13 / 1000000000;
        if ( v11 != v13 / 1000000000 )
          v13 = 0x7FFFFFFFFFFFFFFFLL;
      }
      if ( *(int *)(v5 + 16) <= 0 )
        sub_277F280(a1, a2, a3: v7);
      return v13;
    }
    goto LABEL_36;
  }
  v15 = *(unsigned int *)(v4 + 376613960);
  if ( (_DWORD)v15 == 47076562 )
    v16 = v4 + 52423880;
  else
    v16 = v4 + 8 * v15;
  if ( v16 != v4 )
  {
    v7 = *(_DWORD *)v16 >> 3;
    if ( (_DWORD)v7 != 4260452 )
      goto LABEL_39;
  }
  if ( v16 == v4 )
    goto LABEL_37;
  if ( *(int *)(v5 + 16) <= 0 )
    v16 = sub_277F280(a1, a2, a3: v7);
  return *(_QWORD *)(v16 + 8);
}
