// sub_181EBBA40
// rva 0x01ebba40  size 212  section .text  group text
// window base 0x181ebba40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EBBA40(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9)
{
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rax
  int v12; // ecx
  int v13; // edi
  int v14; // esi
  int v15; // r9d
  __int64 v16; // rdx
  __int64 v17; // r8
  char v19; // [rsp+0h] [rbp-28h] BYREF
  __int64 v20; // [rsp+10h] [rbp-18h]
  __int64 v21; // [rsp+18h] [rbp-10h]
  __int64 v22; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v10 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v19);
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
    return sub_181EBBB20();
  }
  else
  {
    v22 = a3;
    v11 = MEMORY[0x181E60100](a1, a2, a3: v9 + 376613728);
    v16 = *(_QWORD *)(v10 + 40);
    v17 = v16 + 48;
    if ( (unsigned __int64)(v16 + 48) > *(_QWORD *)(v10 + 32) )
    {
      return sub_181EBBAEC(a1: v13, a2: v14, a3: v16, a4: v12, a5: v17, a6: v15, a7, a8, a9);
    }
    else
    {
      *(_QWORD *)(v10 + 40) = v17;
      *(_DWORD *)v16 = 40463520;
      *(_DWORD *)(v16 + 4) = 0;
      *(_QWORD *)(v16 + 8) = 0;
      *(_QWORD *)(v16 + 16) = 0;
      *(_QWORD *)(v16 + 24) = 0;
      *(_QWORD *)(v16 + 32) = 0;
      *(_QWORD *)(v16 + 40) = 0;
      v21 = v11;
      v20 = v16;
      MEMORY[0x1853DFCA0](a1: 0, a2: -1, a3: v16, a4: v16, a5: -1, a6: 0);
      if ( *(int *)(v10 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return v20;
    }
  }
}
