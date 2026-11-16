// sub_18502EDE0
// rva 0x0502ede0  size 250  section .text  group text
// window base 0x18502ede0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18502EDE0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 (*v8)(void); // rax
  _DWORD *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 (__fastcall *v14)(__int64, __int64, _DWORD *, _QWORD, _DWORD *, __int64); // rcx
  __int64 result; // rax
  __int64 v16; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v17; // [rsp+8h] [rbp-10h]
  __int64 v18; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v7 + 8) )
  {
    v18 = a5;
    v17 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_7;
  }
  v18 = a5;
  v8 = (__int64 (*)(void))(v5 + *(_QWORD *)&v6[2 * (*a3 >> 3) + 54]);
  v17 = a3;
  v9 = (_DWORD *)v8();
  if ( v9 == v6 )
  {
LABEL_7:
    MEMORY[0x182771080]();
    goto LABEL_8;
  }
  v12 = (unsigned __int16)v6[2 * v6[2 * (*v9 >> 3) + 5]
                           + 3
                           + (v6[2 * (*v9 >> 3) + 11] & (0x574u >> HIBYTE(v6[2 * (*v9 >> 3) + 11])))];
  if ( (_DWORD)v12 != 1396 )
  {
LABEL_8:
    MEMORY[0x182770780](a1: v10, a2: v11, a3: v17, a4: v12, a5: v18);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_18502EEE0();
  }
  v13 = *v9 >> 3;
  v14 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, _DWORD *, __int64))(v5
                                                                                      + *(_QWORD *)((char *)&v6[2 * v13]
                                                                                                  + HIWORD(v6[2 * v6[2 * v13 + 5] + 3 + (v6[2 * v13 + 11] & (0x574u >> HIBYTE(v6[2 * v13 + 11])))])));
  result = v14(a1: v10, a2: v11, a3: v9, a4: v14, a5: v17, a6: v18);
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
