// sub_181E8DE20
// rva 0x01e8de20  size 343  section .text  group text
// window base 0x181e8de20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_181E8DE20(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6, int a7, __int64 a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // r8
  __int64 v22; // r9
  char v23; // [rsp+0h] [rbp-18h] BYREF
  __int64 v24; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v9 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v23);
    goto LABEL_20;
  }
  v10 = *(unsigned int *)(v8 + 376655320);
  if ( (_DWORD)v10 == 47076562 )
    v11 = v8 + 35127280;
  else
    v11 = v8 + 8 * v10;
  if ( v11 != v8 && *(_DWORD *)v11 >> 3 != 4261917 )
    goto LABEL_21;
  if ( v11 == v8 )
  {
LABEL_20:
    MEMORY[0x182771080]();
LABEL_21:
    MEMORY[0x18276FC00](a1, a2, a3: v11, a4, a5: v8 + 34095336);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    sub_181E8DF80(a1: v19, a2: v20, a3: v17, a4: v18, a5: v21, a6: v22);
    return;
  }
  if ( *(_BYTE *)(v11 + 4) != 0 )
  {
    v12 = *(unsigned int *)(v8 + 376643052);
    v13 = v8 + 376643048;
    if ( (_DWORD)v12 != 0 )
    {
      v24 = v8 + 8 * v12;
      v14 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v14 + 32) > *(_QWORD *)(v9 + 32) )
      {
        v14 = sub_181EAA920(a1, a2, a3: 40462928, a4: v13);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v14 + 32;
        *(_DWORD *)v14 = 40462928;
        *(_DWORD *)(v14 + 4) = 0;
        *(_QWORD *)(v14 + 8) = 0;
        *(_QWORD *)(v14 + 16) = 0;
        *(_QWORD *)(v14 + 24) = 0;
      }
      *(_DWORD *)(v14 + 4) = 47082031;
      v24 = v14;
      MEMORY[0x1827829A0](a1, a2, a3: v8 + 376656272, a4: v13, a5: v14, a6: 0);
      if ( *(int *)(v9 + 16) <= 0 )
        MEMORY[0x18277F280](a1: v15, a2: v16, a3: v24);
    }
    else
    {
      sub_181E8DF29(a1, a2, a3: 0, a4: v13, a5, a6, a7, a8);
    }
  }
  else if ( *(int *)(v9 + 16) <= 0 )
  {
    MEMORY[0x18277F280]();
  }
}
