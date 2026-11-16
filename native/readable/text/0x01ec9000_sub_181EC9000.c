// sub_1EC9000
// rva 0x01ec9000  size 326  section .text  group text
// window base 0x181ec9000: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EC9000(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  _DWORD *v8; // rbx
  __int64 v9; // rcx
  unsigned int v10; // r8d
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // rax
  _DWORD *v14; // rcx
  char v15; // [rsp+0h] [rbp-18h] BYREF
  __int64 v16; // [rsp+8h] [rbp-10h]
  __int64 v17; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v7 + 8) )
  {
    v17 = a5;
    v8 = (_DWORD *)a3;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v15);
LABEL_20:
    sub_276FC00(a1, a2, a3: v8, a4, a5: v6 + 10116948);
LABEL_21:
    sub_2771080();
    goto LABEL_22;
  }
  if ( (_DWORD *)a3 != v6 && *(_DWORD *)a3 >> 3 == 5058440 )
    goto LABEL_9;
  v17 = a5;
  v8 = (_DWORD *)a3;
  if ( (_DWORD *)a3 != v6 )
  {
    v9 = *(_DWORD *)a3 >> 3;
    v10 = v6[2 * v9 + 11];
    a3 = (__int64)&v6[2 * v6[2 * v9 + 5]];
    a4 = HIBYTE(v10);
    if ( (unsigned __int16)*(_DWORD *)(a3 + 4LL * (v10 & (0x1839u >> SHIBYTE(v10))) + 12) != 6201 )
      goto LABEL_20;
  }
  if ( v8 != v6 )
  {
    v11 = *v8 >> 3;
    if ( SHIWORD(v6[2 * v11 + 15]) < 3 || (a3 = (unsigned int)v6[2 * v11 + 4], v6[2 * a3 + 5] != 80367) )
    {
      sub_276FC00(a1, a2, a3: v8, a4, a5: v6 + 10116930);
LABEL_9:
      v17 = a5;
      v16 = a3;
      result = sub_1EC93E0(a1, a2, a3: v6 + 13105894, a4: v17, a5: a3, a6: v17);
      if ( *(int *)(v7 + 16) <= 0 )
        return sub_277F280();
      return result;
    }
  }
  if ( v8 == v6 )
    goto LABEL_21;
  v13 = (unsigned int)v8[2];
  v14 = &v6[2 * v13];
  if ( (_DWORD)v13 == 0 )
  {
LABEL_22:
    sub_2771080(a1, a2, a3, a4: v14);
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
    return sub_1EC9160();
  }
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280(a1, a2, a3, a4: v14);
  return (__int64)v14;
}
