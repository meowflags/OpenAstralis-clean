// sub_18275C740
// rva 0x0275c740  size 243  section .text  group text
// window base 0x18275c740: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18275C740(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, __int64 a6, char a7)
{
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rsi
  int v11; // r9d
  __int64 v12; // rdx
  __int64 *v13; // rax
  int v14; // r8d
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v19; // edx
  int v20; // ecx
  int v21; // edi
  int v22; // esi
  int v23; // r8d
  int v24; // r9d
  char v25; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v26; // [rsp+10h] [rbp-18h]
  __int64 v27; // [rsp+18h] [rbp-10h]
  __int64 v28; // [rsp+20h] [rbp-8h]

  v27 = a3;
  v26 = a5;
  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_16;
  }
  sub_18275A260(a1, a2, a3, a4: (int)a5, a5);
  v12 = v27;
  v13 = *(__int64 **)(v27 + 8);
  v14 = (int)v26;
  if ( v26 == v7 )
    v15 = *v13;
  else
    v15 = *(__int64 *)((char *)v13 + (_QWORD)v26);
  if ( (unsigned __int64)(v15 + 128) >= 0x100 )
  {
    v17 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v17 + 16) > *(_QWORD *)(v8 + 32) )
    {
      v28 = v15;
      v17 = MEMORY[0x181EAA920](a1: v9, a2: v10, a3: 34083616);
      v15 = v28;
      v12 = v27;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v17 + 16;
      *(_DWORD *)v17 = 34083616;
      *(_DWORD *)(v17 + 4) = 0;
      *(_QWORD *)(v17 + 8) = 0;
    }
    *(_QWORD *)(v17 + 8) = v15;
    goto LABEL_7;
  }
  v16 = (unsigned int)(v15 + 128);
  if ( (unsigned int)v16 >= 0x100 )
  {
LABEL_16:
    sub_182770B00(a1: v9, a2: v10, a3: v12, a4: v16, a5: v14, a6: v11, a7: v25);
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
    return sub_18275C840(a1: v21, a2: v22, a3: v19, a4: v20, a5: v23, a6: v24, a7);
  }
  v17 = (__int64)&v7[2 * v7[v16 + 94088023]];
LABEL_7:
  if ( *(int *)(v8 + 16) <= 0 )
    sub_18277F280(a1: v9, a2: v10, a3: v12);
  return v17;
}
