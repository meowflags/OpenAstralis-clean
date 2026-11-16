// sub_4F380A0
// rva 0x04f380a0  size 294  section .text  group text
// window base 0x184f380a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F380A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, char a7)
{
  __int64 v7; // rbx
  unsigned int v8; // ebp
  __int64 v9; // r14
  __int64 v10; // r15
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rsi
  unsigned int v15; // r9d
  unsigned int v16; // r9d
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // [rsp+0h] [rbp-28h] BYREF
  __int64 v23; // [rsp+8h] [rbp-20h]
  __int64 v24; // [rsp+10h] [rbp-18h]
  unsigned int v25; // [rsp+1Ch] [rbp-Ch]
  unsigned int v26; // [rsp+20h] [rbp-8h]
  unsigned int v27; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v10 + 8) )
  {
LABEL_16:
    sub_1EB84E0();
    goto LABEL_17;
  }
  v11 = *(char *)(a3 + 12);
  v12 = *(unsigned int *)(a3 + 4);
  v7 = v9 + 8 * v12;
  if ( (_DWORD)v12 == 0 )
  {
LABEL_17:
    sub_2771080();
LABEL_18:
    v26 = v15;
    v24 = v7;
    v25 = a5;
    v23 = a3;
    sub_2771220(a1, a2: v14, a3: (unsigned int)a5, a4: v13, a5: v8);
    goto LABEL_19;
  }
  v8 = *(_DWORD *)(v9 + 8 * v12 + 8);
  v13 = v11;
  v14 = v8 >> v11;
  if ( *(_DWORD *)(a3 + 8) < (int)v14 )
    JUMPOUT(0x309E4E0DELL);
  v15 = v8 >> v11;
  if ( a5 < 0 || (int)v14 <= a5 )
  {
    v24 = v7;
    v27 = v11;
    v23 = a3;
    v26 = v8 >> v11;
    v25 = a5;
    v18 = sub_632ACC0(a1, a2: (unsigned int)v14, a3: v9 + 376643464);
    if ( v18 == v9 )
    {
LABEL_19:
      sub_2771080(a1: v20, a2: v21, a3: v23, a4: v19, a5: v25, a6: v26);
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
      return sub_4F381E0();
    }
    sub_2769900(a1: v20, a2: v21, a3: v18, a4: v19, a5: &a7);
    goto LABEL_16;
  }
  if ( *(_BYTE *)(a3 + 12) != 0 )
  {
    v16 = *(unsigned __int16 *)(v7 + 2 * a5 + 12);
    if ( *(int *)(v10 + 16) <= 0 )
      sub_277F280();
    return v16;
  }
  if ( v8 <= a5 )
    goto LABEL_18;
  if ( *(int *)(v10 + 16) <= 0 )
    sub_277F280();
  return *(unsigned __int8 *)(v7 + (unsigned int)a5 + 12);
}
