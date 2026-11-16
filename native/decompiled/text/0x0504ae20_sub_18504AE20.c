// sub_18504AE20
// rva 0x0504ae20  size 254  section .text  group text
// window base 0x18504ae20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18504AE20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 (__fastcall *v17)(__int64, __int64, __int64, _QWORD, unsigned __int64); // rcx
  __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  char v22; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v23; // [rsp+Ch] [rbp-2Ch]
  __int64 v24; // [rsp+10h] [rbp-28h]
  unsigned __int64 v25; // [rsp+18h] [rbp-20h]
  __int64 v26; // [rsp+20h] [rbp-18h]
  __int64 v27; // [rsp+28h] [rbp-10h]
  __int64 v28; // [rsp+30h] [rbp-8h]

  v28 = a3;
  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v8 + 8) )
  {
    v27 = a6;
    v26 = a5;
    MEMORY[0x181EB84E0]();
LABEL_10:
    MEMORY[0x182771080](a1: v14, a2: v15, a3: v28, a4: v16, a5: v26, a6: v27);
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_18504AF20(a1: v20, a2: v21, a3: v19);
  }
  v27 = a6;
  v26 = a5;
  sub_18504AC60(a1, a2, a3);
  v11 = *(_QWORD *)(v8 + 40);
  if ( v11 + 24 > *(_QWORD *)(v8 + 32) )
  {
    v12 = MEMORY[0x181EAA920](a1: v9, a2: v10, a3: 43309440);
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v11 + 24;
    *(_DWORD *)v11 = 43309440;
    *(_DWORD *)(v11 + 4) = 0;
    *(_QWORD *)(v11 + 8) = 0;
    *(_QWORD *)(v11 + 16) = 0;
    v12 = v11;
  }
  v13 = *(unsigned int *)(v28 + 4);
  v25 = v12;
  v24 = v7 + 8 * v13;
  v23 = v13;
  sub_185049AA0(a1: v9, a2: v10, a3: v12, a4: v13, a5: v26, a6: v27, a7: v22);
  v16 = v23;
  if ( v23 == 0 )
    goto LABEL_10;
  v17 = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, unsigned __int64))(v6
                                                                                    + *(_QWORD *)(v7
                                                                                                + 8LL
                                                                                                * (*(_DWORD *)(v7 + 8LL * v23) >> 3)
                                                                                                + 392));
  result = v17(a1: v14, a2: v15, a3: v24, a4: v17, a5: v25);
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
