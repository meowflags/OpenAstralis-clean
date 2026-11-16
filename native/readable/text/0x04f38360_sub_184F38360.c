// sub_4F38360
// rva 0x04f38360  size 307  section .text  group text
// window base 0x184f38360: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F38360(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rbp
  __int64 result; // rax
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  int v19; // edx
  int v20; // ecx
  int v21; // edi
  int v22; // esi
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // [rsp+0h] [rbp-28h] BYREF
  __int64 v26; // [rsp+8h] [rbp-20h]
  __int64 v27; // [rsp+10h] [rbp-18h]
  unsigned int v28; // [rsp+1Ch] [rbp-Ch]
  unsigned int v29; // [rsp+20h] [rbp-8h]
  unsigned int v30; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v8 + 8) )
  {
LABEL_15:
    v28 = a5;
    v26 = a3;
    sub_1EB84E0();
LABEL_16:
    v14 = sub_2771080();
    goto LABEL_17;
  }
  v9 = *(unsigned int *)(a3 + 4);
  v10 = (unsigned int)*(char *)(a3 + 12);
  v11 = *(_DWORD *)(a3 + 8);
  v12 = v7 + 8 * v9;
  v27 = v12;
  if ( (int)a5 < 0 || (int)v11 <= (int)a5 )
  {
    v30 = v11;
    v29 = v10;
    v28 = a5;
    v26 = a3;
    v15 = sub_632ACC0(a1, a2, a3: v7 + 376643464, a4: v10, a5, a6: v11);
    if ( v15 == v7 )
    {
LABEL_18:
      sub_2771080(a1: v17, a2: v18, a3: v26, a4: v29, a5: v28);
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
      return sub_4F384A0(a1: v21, a2: v22, a3: v19, a4: v20, a5: v23, a6: v24, a7);
    }
    sub_2769900(a1: v17, a2: v18, a3: v15, a4: v16, a5: &a7);
    goto LABEL_15;
  }
  if ( (_DWORD)v10 != 0 )
  {
    v29 = v10;
    v26 = a3;
    v30 = v11;
    v28 = a5;
    result = sub_501D060(a1: 1, a2: (unsigned int)a5, a3: v7 + 8 * v9, a4: v10, a5, a6: v11);
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  v30 = v11;
  v28 = a5;
  v26 = a3;
  if ( (_DWORD)v9 == 0 )
    goto LABEL_16;
  v14 = *(_DWORD *)(v7 + 8 * v9 + 8);
  if ( v14 <= v28 )
  {
LABEL_17:
    sub_2771220(a1, a2, a3: v28, a4: v10, a5: v14);
    goto LABEL_18;
  }
  if ( *(int *)(v8 + 16) <= 0 )
    sub_277F280();
  return *(unsigned __int8 *)(v12 + v28 + 12);
}
