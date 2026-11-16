// sub_5030920
// rva 0x05030920  size 304  section .text  group text
// window base 0x185030920: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5030920(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 (__fastcall *v20)(__int64, __int64, __int64); // rax
  __int64 v21; // [rsp+0h] [rbp-28h] BYREF
  __int64 v22; // [rsp+10h] [rbp-18h]
  __int64 v23; // [rsp+18h] [rbp-10h]
  __int64 v24; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v5 + 8) )
  {
    v24 = a3;
    sub_1EB84E0();
    goto LABEL_17;
  }
  v6 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v6 == 0 )
  {
LABEL_17:
    v24 = a3;
    sub_2771080();
    goto LABEL_18;
  }
  result = *(unsigned int *)(v4 + 8 * v6 + 8);
  v8 = v4 + 8 * result;
  if ( (_DWORD)result == 0 )
  {
LABEL_6:
    v23 = v8;
    v24 = a3;
    goto LABEL_7;
  }
  v9 = *(unsigned int *)(v5 + 72);
  if ( (_DWORD)v9 == 0
    || ((_DWORD)(v10 = *(unsigned int *)(v4 + 8 * v9 + 72)) == 0 ? (v11 = v4 + 8 * v9) : (v11 = v4 + 8 * v10), v11 == v4) )
  {
    result = sub_2771080();
    goto LABEL_6;
  }
  v12 = v4 + 8LL * *(unsigned int *)(v11 + 24);
  v13 = *(_DWORD *)(v4 + 8 * result) >> 3;
  v14 = *(unsigned int *)(v4 + 8 * v13 + 20);
  LODWORD(v13) = *(_DWORD *)(v4 + 8 * v13 + 44);
  v15 = v4 + 8 * v14;
  v22 = v12;
  v16 = (unsigned int)v13 & (0x56Eu >> SBYTE3(v13));
  if ( (unsigned __int16)*(_DWORD *)(v15 + 4 * v16 + 12) != 1390 )
  {
LABEL_18:
    sub_2770780(a1: v16, a2: v15, a3, a4: v22);
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
    return sub_5030A60();
  }
  v24 = a3;
  v17 = *(_DWORD *)(v4 + 8 * result) >> 3;
  v18 = *(unsigned int *)(v4 + 8 * v17 + 44);
  v19 = (unsigned int)v18 & (0x56Eu >> HIBYTE(*(_DWORD *)(v4 + 8 * v17 + 44)));
  v20 = (__int64 (__fastcall *)(__int64, __int64, __int64))(v3
                                                          + *(_QWORD *)(v4
                                                                      + 8 * v17
                                                                      + HIWORD(*(_DWORD *)(v4
                                                                                         + 8LL
                                                                                         * *(unsigned int *)(v4 + 8 * v17 + 20)
                                                                                         + 4 * v19
                                                                                         + 12))));
  v23 = v8;
  result = v20(a1: v19, a2: v18, a3: v8);
LABEL_7:
  if ( *(int *)(v5 + 16) <= 0 )
    return sub_277F280();
  return result;
}
