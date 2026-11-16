// sub_181ED7320
// rva 0x01ed7320  size 156  section .text  group text
// window base 0x181ed7320: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181ED7320(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  int v8; // eax
  unsigned __int32 v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned __int32 v12; // edx
  __int64 v13; // rcx
  _DWORD *v14; // rbx
  __int64 v16; // rcx
  char v17; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v18; // [rsp+8h] [rbp-10h]
  int v19; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB84E0(a1, a2, (__int64)a3, a4, a5, a6, a7: v17);
  }
  else if ( a3 != v6 )
  {
    v8 = v6[2 * (*a3 >> 3) + 13];
    v18 = a3;
    v19 = v8;
    v9 = sub_181ED73C0();
    v12 = v9;
    v13 = v19;
    v14 = v18;
    if ( __sync_val_compare_and_swap((_DWORD *)((char *)v18 + v19), 0, v9) != 0 )
    {
      v16 = *(unsigned int *)((char *)v14 + v13);
      if ( *(int *)(v7 + 16) <= 0 )
        MEMORY[0x18277F280](a1: v10, a2: v11, a3: v9, a4: v16);
      return (unsigned int)v16;
    }
    else
    {
      if ( *(int *)(v7 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return v12;
    }
  }
  MEMORY[0x1828C1C40](a1, a2, a3: v6 + 90325108);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_181ED73C0();
}
