// sub_184F37500
// rva 0x04f37500  size 878  section .text  group text
// window base 0x184f37500: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F37500(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, unsigned int a6)
{
  __int64 v6; // rbx
  unsigned int v7; // ebp
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rdi
  unsigned int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r9
  unsigned __int16 v17; // dx
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // r8
  unsigned int v28; // eax
  int v29; // r10d
  __int64 v30; // r11
  unsigned __int16 v31; // dx
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // [rsp+0h] [rbp-48h] BYREF
  __int64 v40; // [rsp+8h] [rbp-40h]
  __int64 v41; // [rsp+10h] [rbp-38h]
  __int64 v42; // [rsp+18h] [rbp-30h]
  unsigned int v43; // [rsp+24h] [rbp-24h]
  unsigned int v44; // [rsp+28h] [rbp-20h]
  int v45; // [rsp+2Ch] [rbp-1Ch]
  unsigned int v46; // [rsp+30h] [rbp-18h]
  unsigned int v47; // [rsp+34h] [rbp-14h]
  int v48; // [rsp+38h] [rbp-10h]
  int v49; // [rsp+3Ch] [rbp-Ch]
  int v50; // [rsp+40h] [rbp-8h]
  int v51; // [rsp+44h] [rbp-4h]

  v51 = a6;
  v50 = a2;
  if ( (unsigned __int64)&v39 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0](a1: a3);
LABEL_34:
    MEMORY[0x182770B00](a1: v42);
    goto LABEL_35;
  }
  v42 = a3;
  v41 = a1;
  v49 = a4;
  if ( a5 != 0 )
  {
    v48 = a5;
    MEMORY[0x185021E80](a1: (unsigned int)a2, a2: (unsigned int)a4, a3, a4, a5: a6, a6: a1);
    v10 = v42;
LABEL_4:
    if ( *(int *)(v9 + 16) <= 0 )
      MEMORY[0x18277F280](a1: v10);
    return v10;
  }
  v48 = 0;
  if ( (int)a4 - v50 < 0 )
    goto LABEL_34;
  if ( (int)a2 < 0 )
  {
LABEL_35:
    MEMORY[0x182770B00](a1: v42);
  }
  else if ( a1 != v8 )
  {
    v12 = *(_DWORD *)(a1 + 8);
    if ( (unsigned int)a4 > v12 )
    {
LABEL_37:
      MEMORY[0x182770B00](a1: v42);
      goto LABEL_38;
    }
    LODWORD(v6) = v51;
    if ( v51 < 0 )
    {
LABEL_38:
      MEMORY[0x182770B00](a1: v42);
    }
    else if ( a3 != v8 )
    {
      v7 = *(_DWORD *)(a3 + 8);
      if ( (int)a4 - v50 + v51 > v7 )
      {
LABEL_40:
        v13 = MEMORY[0x182770B00](a1: a3);
LABEL_41:
        v46 = v13;
        v28 = MEMORY[0x182771220](a1: v42, a2: v14, a3: (unsigned int)v15, a4: v15, a5: v7, a6: v16);
LABEL_42:
        MEMORY[0x182771220](a1: v42, a2: v18, a3: (unsigned int)v16, a4: v15, a5: v28);
LABEL_43:
        v28 = MEMORY[0x182771220](a1: v10, a2: v18, a3: (unsigned int)v15, a4: v15, a5: v7);
LABEL_44:
        MEMORY[0x182771220](a1: v10, a2: v18, a3: (unsigned int)v6, a4: v15, a5: v28, a6: v32);
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
        return sub_184F37880(a1: v35, a2: v36, a3: v33, a4: v34, a5: v37, a6: v38);
      }
      v47 = *(_DWORD *)(a3 + 8);
      v46 = v12;
      if ( a1 == v8 )
        JUMPOUT(0x309E4D5DBLL);
      if ( a3 == v8 )
        JUMPOUT(0x309E4D5E5LL);
      v13 = MEMORY[0x182836340](a1, a2, a3: a1 + 2LL * (unsigned int)a2 + 12, a4, a5: a3 + (unsigned int)v51 + 12LL);
      v15 = v50 + v13;
      LODWORD(v6) = v49;
      if ( v49 <= (int)v15 )
      {
        v10 = v42;
        goto LABEL_4;
      }
      v7 = v46;
      v16 = v13 + v51;
      if ( v46 <= (unsigned int)v15 )
        goto LABEL_41;
      v10 = v41;
      v17 = *(_WORD *)(v41 + 2 * v15 + 12);
      v18 = v17;
      if ( v17 < 0x100u )
      {
        v46 = v13;
        v28 = v47;
        v6 = (unsigned int)(v16 + 1);
        if ( v47 > (unsigned int)v16 )
        {
          v10 = v42;
          *(_BYTE *)(v42 + v16 + 12) = v17;
          v15 = (unsigned int)(v15 + 1);
          v29 = v49;
          v30 = v41;
          while ( v29 > (int)v15 )
          {
            if ( v7 <= (unsigned int)v15 )
              goto LABEL_43;
            v31 = *(_WORD *)(v30 + 2 * v15 + 12);
            v18 = v31;
            if ( v31 >= 0x100u )
            {
              v47 = v31;
              LODWORD(v16) = v6;
              v45 = v15;
              goto LABEL_21;
            }
            v32 = (unsigned int)(v6 + 1);
            if ( v28 <= (unsigned int)v6 )
              goto LABEL_44;
            *(_BYTE *)(v10 + v6 + 12) = v31;
            v15 = (unsigned int)(v15 + 1);
            v6 = (unsigned int)v32;
          }
          goto LABEL_4;
        }
        goto LABEL_42;
      }
      v47 = v17;
      v45 = v50 + v13;
      v46 = v13;
LABEL_21:
      v44 = v16;
      v40 = sub_184F395A0(a1: v10, a2: v18, a3: v42, a4: v15, a5: (unsigned int)v16);
      v43 = v44 + 1;
      MEMORY[0x18501CF00](a1: v20, a2: v21, a3: v44, a4: v19, a5: v40);
      v22 = v47;
      v23 = v40;
      *(_WORD *)(v40 + (int)(2 * v44) + 12) = v47;
      MEMORY[0x185021E80](a1: (unsigned int)++v45, a2: (unsigned int)v49, a3: v23, a4: v22, a5: v43, a6: v41);
      if ( *(int *)(v9 + 16) <= 0 )
        MEMORY[0x18277F280](a1: v25, a2: v26, a3: v24, a4: v47, a5: v27, a6: v43);
      return v40;
    }
    MEMORY[0x182771080]();
    goto LABEL_40;
  }
  MEMORY[0x182771080](a1: v42);
  goto LABEL_37;
}
