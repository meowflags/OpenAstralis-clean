// sub_4F384A0
// rva 0x04f384a0  size 312  section .text  group text
// window base 0x184f384a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F384A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rbp
  __int64 v13; // rsi
  __int64 result; // rax
  __int64 v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // [rsp+0h] [rbp-28h] BYREF
  __int64 v22; // [rsp+8h] [rbp-20h]
  __int64 v23; // [rsp+10h] [rbp-18h]
  unsigned int v24; // [rsp+18h] [rbp-10h]
  unsigned int v25; // [rsp+1Ch] [rbp-Ch]
  int v26; // [rsp+20h] [rbp-8h]
  unsigned int v27; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v8 + 8) )
  {
LABEL_15:
    v24 = a5;
    v22 = a3;
    sub_1EB84E0();
LABEL_16:
    v16 = sub_2771080();
    goto LABEL_17;
  }
  v9 = *(unsigned int *)(a3 + 4);
  v10 = (unsigned int)*(char *)(a3 + 12);
  v11 = *(_DWORD *)(a3 + 8);
  v12 = v7 + 8 * v9;
  v23 = v12;
  v13 = (unsigned int)(a5 - 1);
  v27 = v13;
  if ( (int)v13 < 0 || v11 <= (int)v13 )
  {
    v26 = v11;
    v25 = v10;
    v24 = a5;
    v22 = a3;
    v17 = sub_632ACC0(a1, a2: v13, a3: v7 + 376643464, a4: v10, a5: (unsigned int)v13, a6: (unsigned int)v11);
    if ( v17 == v7 )
    {
LABEL_18:
      sub_2771080(a1: v19, a2: v27, a3: v22, a4: v25, a5: v24);
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_4F385E0();
    }
    sub_2769900(a1: v19, a2: v20, a3: v17, a4: v18, a5: &a7);
    goto LABEL_15;
  }
  if ( (_DWORD)v10 != 0 )
  {
    v26 = v11;
    v25 = v10;
    v22 = a3;
    v24 = a5;
    result = sub_501D280(a1: (unsigned int)a5, a2: v13, a3: v7 + 8 * v9, a4: v10, a5, a6: 1);
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_277F280(a1: v15, a2: v27);
    return result;
  }
  v26 = v11;
  v24 = a5;
  v22 = a3;
  if ( (_DWORD)v9 == 0 )
    goto LABEL_16;
  v16 = *(_DWORD *)(v7 + 8 * v9 + 8);
  if ( v16 <= v27 )
  {
LABEL_17:
    sub_2771220(a1, a2: v13, a3: v27, a4: v10, a5: v16);
    goto LABEL_18;
  }
  if ( *(int *)(v8 + 16) <= 0 )
    sub_277F280();
  return *(unsigned __int8 *)(v12 + v13 + 12);
}
