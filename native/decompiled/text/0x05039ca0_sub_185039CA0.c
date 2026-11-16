// sub_185039CA0
// rva 0x05039ca0  size 309  section .text  group text
// window base 0x185039ca0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185039CA0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5, __int64 a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  _DWORD *v14; // rdx
  __int64 v15; // r8
  __int64 result; // rax
  _DWORD *v17; // r8
  __int64 v18; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v19; // [rsp+8h] [rbp-20h]
  __int64 v20; // [rsp+10h] [rbp-18h]
  _DWORD *v21; // [rsp+18h] [rbp-10h]
  _DWORD *v22; // [rsp+20h] [rbp-8h]

  v22 = a3;
  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v8 + 8) )
  {
    v20 = a6;
    MEMORY[0x181EB84E0]();
LABEL_15:
    MEMORY[0x182771080]();
    goto LABEL_16;
  }
  v21 = a5;
  v9 = *(_QWORD *)(v8 + 40);
  if ( v9 + 24 > *(_QWORD *)(v8 + 32) )
  {
    v20 = a6;
    v9 = MEMORY[0x181EAA920](a1, a2, a3: 40541312);
    a6 = v20;
    v10 = (__int64)v22;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v9 + 24;
    *(_DWORD *)v9 = 40541312;
    *(_DWORD *)(v9 + 4) = 0;
    *(_QWORD *)(v9 + 8) = 0;
    *(_QWORD *)(v9 + 16) = 0;
    v10 = (__int64)a3;
  }
  v20 = a6;
  v19 = v9;
  sub_1850374A0(a1, a2, a3: v9, a4: v10, a5: v10, a6);
  v14 = v22;
  v15 = *v22 >> 3;
  if ( SHIWORD(v7[2 * v15 + 15]) < 4 || v7[2 * v7[2 * v15 + 4] + 6] != 71171 )
  {
    if ( v21 != v7 )
    {
      result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, unsigned __int64))(v6
                                                                                              + *(_QWORD *)&v7[2 * (*v21 >> 3) + 86]))(
                 a1: v12,
                 a2: v13,
                 a3: v21,
                 a4: v11,
                 a5: v19);
      goto LABEL_7;
    }
    goto LABEL_15;
  }
  v17 = v21;
  if ( v21 == v7 )
  {
LABEL_16:
    MEMORY[0x182771080](a1: v12, a2: v13, a3: v14, a4: v11, a5: v17, a6: v20);
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
    return sub_185039DE0();
  }
  result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, unsigned __int64))(v6
                                                                                          + *(_QWORD *)&v7[2 * (*v21 >> 3) + 82]))(
             a1: v12,
             a2: v13,
             a3: v21,
             a4: v11,
             a5: v19);
LABEL_7:
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
