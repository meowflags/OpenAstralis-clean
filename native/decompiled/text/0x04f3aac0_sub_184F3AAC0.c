// sub_184F3AAC0
// rva 0x04f3aac0  size 879  section .text  group text
// window base 0x184f3aac0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F3AAC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        int a7,
        unsigned int a8)
{
  __int64 v8; // rbx
  unsigned int v9; // ebp
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rdi
  __int64 v13; // rsi
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned __int16 v17; // dx
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rsi
  unsigned int v25; // eax
  __int64 v26; // r11
  unsigned __int16 v27; // dx
  int v28; // edx
  int v29; // ecx
  int v30; // edi
  int v31; // esi
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // [rsp+0h] [rbp-48h] BYREF
  __int64 v35; // [rsp+8h] [rbp-40h]
  __int64 v36; // [rsp+10h] [rbp-38h]
  __int64 v37; // [rsp+18h] [rbp-30h]
  unsigned int v38; // [rsp+24h] [rbp-24h]
  int v39; // [rsp+28h] [rbp-20h]
  unsigned int v40; // [rsp+2Ch] [rbp-1Ch]
  unsigned int v41; // [rsp+30h] [rbp-18h]
  unsigned int v42; // [rsp+34h] [rbp-14h]
  int v43; // [rsp+38h] [rbp-10h]
  int v44; // [rsp+3Ch] [rbp-Ch]
  int v45; // [rsp+40h] [rbp-8h]
  unsigned int v46; // [rsp+44h] [rbp-4h]

  v46 = a6;
  v45 = a1;
  v44 = a4;
  if ( (unsigned __int64)&v34 <= *(_QWORD *)(v11 + 8) )
  {
    MEMORY[0x181EB84E0](a1, a2: a3);
LABEL_34:
    MEMORY[0x182770B00](a1, a2: v37);
    goto LABEL_35;
  }
  v37 = a3;
  v36 = a2;
  if ( a5 != 0 )
  {
    v43 = a5;
    MEMORY[0x185021E80](a1: (unsigned int)a4, a2: a8, a3, a4, a5: (unsigned int)a1, a6: a2);
    v13 = v37;
LABEL_4:
    if ( *(int *)(v11 + 16) <= 0 )
      MEMORY[0x18277F280](a1: v12, a2: v13);
    return v13;
  }
  v43 = 0;
  if ( (int)(a8 - v44) < 0 )
    goto LABEL_34;
  if ( (int)a4 < 0 )
  {
LABEL_35:
    MEMORY[0x182770B00](a1, a2: v37);
  }
  else if ( a2 != v10 )
  {
    LODWORD(v8) = *(_DWORD *)(a2 + 8);
    if ( a8 > (unsigned int)v8 )
    {
LABEL_37:
      MEMORY[0x182770B00](a1, a2: v37);
    }
    else if ( (int)a1 >= 0 )
    {
      if ( a3 == v10 )
      {
LABEL_39:
        MEMORY[0x182771080]();
        goto LABEL_40;
      }
      v9 = *(_DWORD *)(a3 + 8);
      if ( a8 - v44 + (unsigned int)a1 > v9 )
      {
LABEL_40:
        v15 = MEMORY[0x182770B00](a1, a2: a3);
LABEL_41:
        v41 = v15;
        v25 = MEMORY[0x182771220](a1: v12, a2: v37, a3: (unsigned int)v16, a4: v16, a5: v9);
LABEL_42:
        MEMORY[0x182771220](a1: v12, a2: v37, a3: (unsigned int)v12, a4: v16, a5: v25, a6: v18);
LABEL_43:
        v25 = MEMORY[0x182771220](a1: v12, a2: v13, a3: (unsigned int)v16, a4: v16, a5: v9, a6: v18);
LABEL_44:
        MEMORY[0x182771220](a1: v12, a2: v13, a3: (unsigned int)v8, a4: v16, a5: v25, a6: v18);
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
        return sub_184F3AE40(a1: v30, a2: v31, a3: v28, a4: v29, a5: v32, a6: v33, a7, a8);
      }
      v42 = *(_DWORD *)(a3 + 8);
      v41 = v8;
      if ( a2 == v10 )
        JUMPOUT(0x309E50B9DLL);
      if ( a3 == v10 )
        JUMPOUT(0x309E50BA7LL);
      v15 = MEMORY[0x182836340](a1, a2, a3: a2 + 2LL * (unsigned int)a4 + 12, a4, a5: a3 + (unsigned int)a1 + 12LL);
      v16 = v44 + v15;
      LODWORD(v8) = a8;
      if ( (int)a8 <= (int)v16 )
      {
        v13 = v37;
        goto LABEL_4;
      }
      v9 = v41;
      v12 = v15 + v45;
      if ( v41 <= (unsigned int)v16 )
        goto LABEL_41;
      v13 = v36;
      v17 = *(_WORD *)(v36 + 2 * v16 + 12);
      v18 = v17;
      if ( v17 < 0x100u )
      {
        v41 = v15;
        v25 = v42;
        v8 = (unsigned int)(v12 + 1);
        if ( v42 > (unsigned int)v12 )
        {
          v13 = v37;
          *(_BYTE *)(v37 + v12 + 12) = v17;
          v16 = (unsigned int)(v16 + 1);
          v26 = v36;
          while ( (int)a8 > (int)v16 )
          {
            if ( v9 <= (unsigned int)v16 )
              goto LABEL_43;
            v27 = *(_WORD *)(v26 + 2 * v16 + 12);
            v12 = v27;
            if ( v27 >= 0x100u )
            {
              v42 = v27;
              v40 = v8;
              v39 = v16;
              goto LABEL_21;
            }
            v18 = (unsigned int)(v8 + 1);
            if ( v25 <= (unsigned int)v8 )
              goto LABEL_44;
            *(_BYTE *)(v13 + v8 + 12) = v27;
            v16 = (unsigned int)(v16 + 1);
            v8 = (unsigned int)v18;
          }
          goto LABEL_4;
        }
        goto LABEL_42;
      }
      v42 = v17;
      v40 = v15 + v45;
      v39 = v44 + v15;
      v41 = v15;
LABEL_21:
      v35 = sub_184F395A0(a1: v12, a2: v13, a3: v37, a4: v16, a5: v46);
      v38 = v40 + 1;
      MEMORY[0x18501CF00](a1: v19, a2: v20, a3: v40, a4: v40 + 1, a5: v35);
      v21 = v42;
      v22 = v35;
      *(_WORD *)(v35 + (int)(2 * v40) + 12) = v42;
      MEMORY[0x185021E80](a1: (unsigned int)++v39, a2: a8, a3: v22, a4: v21, a5: v38, a6: v36);
      if ( *(int *)(v11 + 16) <= 0 )
        MEMORY[0x18277F280](a1: v23, a2: v24, a3: v38, a4: v42);
      return v35;
    }
    MEMORY[0x182770B00](a1, a2: v37);
    goto LABEL_39;
  }
  MEMORY[0x182771080](a1, a2: v37);
  goto LABEL_37;
}
