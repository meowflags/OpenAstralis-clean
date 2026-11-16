// sub_181E8DF80
// rva 0x01e8df80  size 200  section .text  group text
// window base 0x181e8df80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E8DF80(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 result; // rax
  double v39; // xmm0_8
  char v40; // [rsp+0h] [rbp-28h] BYREF
  __int64 v41; // [rsp+10h] [rbp-18h]
  __int64 v42; // [rsp+18h] [rbp-10h]
  __int64 v43; // [rsp+20h] [rbp-8h]

  v8 = v6 + 376654936;
  if ( (unsigned __int64)&v40 <= *(_QWORD *)(v7 + 8) )
  {
    v39 = sub_181EB83C0(a1, a2, a3: v8, a4, a5, a6, a7: v40);
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
    return sub_181E8E060(a1: v39);
  }
  else
  {
    v43 = a1;
    v42 = a6;
    v41 = a5;
    v9 = sub_181E8DD60(a1, a2, a3: v8, a4, a5, a6);
    v13 = MEMORY[0x182084840](a1: v11, a2: v12, a3: v9, a4: v10, a5: v6 + 373054984);
    v17 = MEMORY[0x182084840](a1: v15, a2: v16, a3: v13, a4: v14, a5: v41);
    v21 = MEMORY[0x182084840](a1: v19, a2: v20, a3: v17, a4: v18, a5: v6 + 372436952);
    v24 = MEMORY[0x182084440](a1: 2, a2: v23, a3: v21, a4: v22, a5: v42, a6: 0x100000);
    v28 = MEMORY[0x182084840](a1: v26, a2: v27, a3: v24, a4: v25, a5: v6 + 368955048);
    v31 = MEMORY[0x182084440](a1: 2, a2: v30, a3: v28, a4: v29, a5: v43, a6: 0x100000);
    v35 = MEMORY[0x182084840](a1: v33, a2: v34, a3: v31, a4: v32, a5: v6 + 368955456);
    result = MEMORY[0x1820841E0](a1: v36, a2: v37, a3: v35);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
